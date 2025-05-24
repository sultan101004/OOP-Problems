//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//class coin {
//	string sideup;
//
//public:
//	coin(string a = "") {
//		
//		toss();
//
//	}
//
//	bool toss() {
//
//		int n = 1 + rand() % 10;
//		
//		if (n % 2 == 0) {
//			sideup = "heads";
//			return true;
//		}
//		else {
//			sideup = "tails";
//			return false;
//		}
//		
//	}
//	
//	void display()const {
//
//		cout << sideup << "  ";
//	}
//
//};
//int main() {
//	
//	srand(time(0));  //seeds the time
//	double n = 0.0;
//	coin quarter;
//	coin dime;
//	coin nickel;
//	
//
//
//	cout << "Quarter|" << "Dime" << "|Nickel" << endl;
//	while (n < 1){
//		if (quarter.toss()) {
//			n += 0.25;
//		}
//		quarter.display();
//		if (dime.toss()) {
//			n += 0.1;
//		}
//		dime.display();
//		if (nickel.toss()) {
//			n += 0.05;
//		}
//		nickel.display();
//
//		cout << "Balance = $ " << n << endl;
//		
//	}
//
//	if (n == 1) {
//		cout << "Winner Winner Chicken Dinner!" << endl;
//	}
//	else {
//		cout << "You Lost" << endl;
//	}
//
//
////	cout << "random number between 0 and 1: " << randomnumber << endl;
//
//	return 0;
//}
//
