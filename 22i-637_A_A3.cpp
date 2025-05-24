#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Statistics class for player and team stats
class Statistics {
public:
    int gamesPlayed{};
    int goalsScored{};
    int assists{};
    int tackles{};
    int interceptions{};
    double skillRating{};

    // Parameterized constructor
    Statistics(int games = 0, int goals = 0, int assists = 0, int tackles = 0, int interceptions = 0, double skill = 0.0)
        : gamesPlayed(games), goalsScored(goals), assists(assists), tackles(tackles),
        interceptions(interceptions), skillRating(skill) {}

    void display() const {
        cout << "Games: " << gamesPlayed << " | Goals: " << goalsScored
            << " | Assists: " << assists << " | Tackles: " << tackles
            << " | Interceptions: " << interceptions
            << " | Skill: " << skillRating << endl;
    }
};

// Position class with predefined roles
class Position {
public:
    static const string Goalkeeper;
    static const string Defender;
    static const string Midfielder;
    static const string Forward;

    string position;

    explicit Position(const string& pos = "None") : position(pos) {}
};

// Static constants for positions
const string Position::Goalkeeper = "Goalkeeper";
const string Position::Defender = "Defender";
const string Position::Midfielder = "Midfielder";
const string Position::Forward = "Forward";

// Player class to store individual details
class Player {
public:
    string name;
    int age{};
    Position position;
    Statistics stats;

    Player(const string& name = "None", const string& pos = "None", int age = 18,
        const Statistics& stats = Statistics())
        : name(name), age(age), position(pos), stats(stats) {}

    void display() const {
        cout << setw(10) << name << " | Age: " << age
            << " | Position: " << setw(10) << position.position
            << " | Goals: " << stats.goalsScored
            << " | Skill: " << stats.skillRating << endl;
    }
};

// Team class to manage a group of players and aggregate stats
class Team {
public:
    string teamName;
    Player* players{};
    int totalPlayers{};
    Statistics teamStats;
    int points{};  // Points accumulated by the team

    Team(const string& name = "None", Player* playersArray = nullptr, int numPlayers = 0)
        : teamName(name), totalPlayers(numPlayers), points(0) {
        players = new Player[totalPlayers];
        for (int i = 0; i < totalPlayers; ++i) {
            players[i] = playersArray[i];
        }
        updateTeamStats();
    }

    ~Team() {
        delete[] players;
    }

    void updateTeamStats() {
        teamStats = Statistics();  // Reset stats
        for (int i = 0; i < totalPlayers; ++i) {
            teamStats.gamesPlayed += players[i].stats.gamesPlayed;
            teamStats.goalsScored += players[i].stats.goalsScored;
            teamStats.assists += players[i].stats.assists;
            teamStats.tackles += players[i].stats.tackles;
            teamStats.interceptions += players[i].stats.interceptions;
            teamStats.skillRating += players[i].stats.skillRating;
        }
        if (totalPlayers > 0) {
            teamStats.skillRating /= totalPlayers;  // Average skill rating
        }
    }

    void displayTeam() const {
        cout << "\nTeam: " << teamName << "\nPlayers:\n";
        for (int i = 0; i < totalPlayers; ++i) {
            cout << i + 1 << ". ";
            players[i].display();
        }
        cout << "\nAggregated Team Stats:\n";
        teamStats.display();
        cout << "Points: " << points << endl;  // Display points
    }
};

// Game class to represent a single match
class Game {
public:
    Team* homeTeam{};
    Team* awayTeam{};
    int homeScore{};
    int awayScore{};
    bool isPlayed{ false };

    Game() = default;

    void simulate() {
        if (isPlayed) return;

        // Generate random score for the match
        homeScore = rand() % 5;  // Random score (0-4)
        awayScore = rand() % 5;
        isPlayed = true;  // Mark match as played

        // Update games played
        homeTeam->teamStats.gamesPlayed++;
        awayTeam->teamStats.gamesPlayed++;

        // Update goals scored
        homeTeam->teamStats.goalsScored += homeScore;
        awayTeam->teamStats.goalsScored += awayScore;

        // Assign points
        if (homeScore > awayScore) {
            homeTeam->points += 3;  // Home team wins
        }
        else if (homeScore < awayScore) {
            awayTeam->points += 3;  // Away team wins
        }
        else {
            homeTeam->points += 1;  // Draw
            awayTeam->points += 1;  // Draw
        }

        // Output the match results
        cout << homeTeam->teamName << " " << homeScore << " - " << awayScore << " " << awayTeam->teamName;
        if (homeScore > awayScore) cout << " | Winner: " << homeTeam->teamName << endl;
        else if (homeScore < awayScore) cout << " | Winner: " << awayTeam->teamName << endl;
        else cout << " | Match Drawn\n";
    }


    void display() const {
        cout << homeTeam->teamName << " vs " << awayTeam->teamName;
        if (isPlayed) {
            cout << " | Score: " << homeScore << " - " << awayScore;
        }
        else {
            cout << " | Not Played Yet";
        }
        cout << endl;
    }
};

// Season class to manage teams, schedule, and simulate games
class Season {
private:
    Team* teams[10];  // Maximum of 10 teams
    Game schedule[20][5];  // 20 weeks, max 5 matches per week
    int teamCount{};
    int totalWeeks{};

public:
    Season() = default;

    bool addTeam(Team* team) {
        if (teamCount >= 10) {
            cout << "Cannot add more teams.\n";
            return false;
        }
        teams[teamCount++] = team;
        return true;
    }

    void generateSchedule() {
        totalWeeks = teamCount - 1; // One fewer week than the total number of teams

        // Round-robin scheduling
        for (int week = 0; week < totalWeeks; ++week) {
            for (int match = 0; match < teamCount / 2; ++match) {
                int homeIndex = (week + match) % teamCount;
                int awayIndex = (teamCount - match - 1 + week) % teamCount;

                if (homeIndex == awayIndex) {
                    awayIndex = (awayIndex + 1) % teamCount;  // Avoid pairing a team with itself
                }

                schedule[week][match].homeTeam = teams[homeIndex];
                schedule[week][match].awayTeam = teams[awayIndex];
            }
        }
    }


    void displaySchedule() const {
        for (int week = 0; week < totalWeeks; ++week) {
            cout << "\nWeek " << week + 1 << " Matches:\n";
            for (int match = 0; match < teamCount / 2; ++match) {
                schedule[week][match].display();  // Display match status
            }
        }
    }


    void simulateWeek(int week) {
        if (week < 0 || week >= totalWeeks) {
            cout << "Invalid week number.\n";
            return;
        }
        cout << "\nSimulating Week " << week + 1 << ":\n";
        for (int match = 0; match < teamCount / 2; ++match) {
            schedule[week][match].simulate();  // Simulate each match
        }

        // After simulating the week, display the updated schedule for that week
        displaySchedule();
        showRanking();  // Display rankings after simulation
    }


    void showRanking() {
        cout << "\nTeam Rankings:\n";
        // Sort teams by points in descending order
        for (int i = 0; i < teamCount - 1; ++i) {
            for (int j = i + 1; j < teamCount; ++j) {
                if (teams[i]->points < teams[j]->points) {
                    // Swap teams if points are lower
                    Team* temp = teams[i];
                    teams[i] = teams[j];
                    teams[j] = temp;
                }
            }
        }

        // Display sorted teams and their points
        for (int i = 0; i < teamCount; ++i) {
            cout << i + 1 << ". " << teams[i]->teamName << " - Points: " << teams[i]->points << endl;
        }
    }


};

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed for random scores

    // Players for two teams
    Player players1[] = {
        Player("Sultan", Position::Goalkeeper, 21, Statistics(10, 1, 2, 4, 5, 88.0)),
        Player("Ahmed", Position::Midfielder, 22, Statistics(10, 1, 2, 4, 5, 80.0)),
        Player("Bilal", Position::Defender, 23, Statistics(10, 1, 2, 4, 5, 75.0)),
        Player("Hassan", Position::Forward, 20, Statistics(10, 3, 1, 2, 1, 90.0)),
    };

    Player players2[] = {
        Player("Khalid", Position::Defender, 24, Statistics(10, 2, 3, 4, 6, 85.0)),
        Player("Omar", Position::Midfielder, 22, Statistics(10, 1, 4, 5, 5, 78.0)),
        Player("Zain", Position::Forward, 23, Statistics(10, 4, 2, 1, 3, 88.0)),
        Player("Ali", Position::Goalkeeper, 21, Statistics(10, 0, 1, 5, 6, 80.0)),
    };

    Player players3[] = {
        Player("DKhalid", Position::Defender, 22, Statistics(10, 2, 3, 4, 6, 85.0)),
        Player("DOmar", Position::Midfielder, 21, Statistics(10, 1, 4, 5, 10, 78.0)),
        Player("DZain", Position::Forward, 23, Statistics(10, 4, 2, 1, 5, 88.0)),
        Player("DAli", Position::Goalkeeper, 21, Statistics(10, 0, 2, 5, 6, 80.0)),
    };

    Player players4[] = {
        Player("DKhFalid", Position::Defender, 22, Statistics(11, 2, 3, 4, 6, 85.0)),
        Player("DOmFar", Position::Midfielder, 21, Statistics(10, 3, 4, 5, 10, 78.0)),
        Player("DZFain", Position::Forward, 23, Statistics(10, 4, 2, 15, 5, 88.0)),
        Player("DAliF", Position::Goalkeeper, 21, Statistics(10, 0, 2, 5, 16, 85.0)),
    };


    // Teams
    Team oddTeam("Odd Warriors", players1, 4);
    Team evenTeam("Even Knights", players2, 4);
    Team t3("Team Fast", players3, 4);
    Team t4("Team Nust", players4, 4);

    // Season setup
    Season season;
    season.addTeam(&oddTeam);
    season.addTeam(&evenTeam);
    season.addTeam(&t3);
    season.addTeam(&t4);

    season.generateSchedule();
    season.displaySchedule();
    season.simulateWeek(0);

    // Show rankings after the season
    season.showRanking();

    return 0;
}
