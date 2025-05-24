//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class Fishing {
//    int die;
//
//public:
//    static int points;
//    Fishing() {
//        die = 1;
//    }
//    Fishing(int a) : die(a) {
//        Toss();
//    }
//    void Toss() {
//        die = 1 + (rand() % 6);
//        switch (die) {
//        case 1:
//            cout << "Caught a Huge Fish" << endl;
//            points += 10;
//            break;
//        case 2:
//            cout << "Caught a Shoe" << endl;
//            points += 1;
//            break;
//        case 3:
//            cout << "Caught a Small Fish" << endl;
//            points += 3;
//            break;
//        case 4:
//            cout << "Caught a Fairy" << endl;
//            points += 50;
//            break;
//        case 5:
//            cout << "Caught a tin" << endl;
//            points += 0;
//            break;
//        case 6:
//            cout << "Caught nothing" << endl;
//            points -= 1;
//            break;
//        default:
//            cout << "Invalid Input" << endl;
//        }
//    }
//    void display() {
//        cout << "Points: " << points << endl;
//    }
//};
//
//int Fishing::points = 0;
//
//int main() {
//    srand(time(0));
//    char ans;
//    Fishing F1;
//
//    do {
//        F1.Toss();
//        cout << "Continue? Type y for YES" << endl;
//        cin >> ans;
//    } while (ans == 'y' || ans == 'Y');
//
//    cout << endl << endl;
//    F1.display();
//
//    return 0;
//}