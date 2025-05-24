//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//class Coin {
//	string sideup;
//
//public:
//	Coin(string a = "") {
//		
//		Toss();
//
//	}
//
//	void Toss() {
//
//		int n = 1 + rand() % 10;
//		
//		if (n % 2 == 0) {
//			sideup = "Heads";
//		}
//		else {
//			sideup = "Tails";
//		}
//		
//	}
//	
//	void display()const {
//
//		cout << sideup << " ";
//	}
//
//};
//int main() {
//	
//	srand(time(0));  //seeds the time
//	Coin C1;
//	
//	for (int i = 0; i < 20; i++) {
//		C1.Toss();
//		C1.display();
//	}
////	cout << "Random number between 0 and 1: " << randomNumber << endl;
//
//	return 0;
//}