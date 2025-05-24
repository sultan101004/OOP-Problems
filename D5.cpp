#include<iostream>
using namespace std;

void increment(int* start, int* end) {
	int* current = start;
	cout << "Start = " << start << " | " << " End = " << end << endl ;
	while (current != end) {
	
		++(*current);
		cout << *current << endl;
		cout << current << endl;
		++current;

	}
}

int main() {

	int score[5] = { 1,2,34,5,44 };
	increment(score, score + 5);
	return 0;
}