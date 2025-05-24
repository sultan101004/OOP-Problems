//#include<iostream>
//#include<cmath>
//#include<cstdlib>
//using namespace std;
//
//class Dice {
//	
//	int* die;
//	
//	void allocate() {
//		die = new int[2];
//	}
//
//public:
//	static int sum;
//	
//	Dice(int a = 0, int b = 0){
//		allocate();
//		die[0] = a;
//		die[1] = b;
//	}
//	
//	void Toss() {
//		die[0] = 1 + rand() % 6;
//		die[1] = 1 + rand() % 6;
//	}
//
//	int add() {
//		sum += die[0] + die[1];
//		cout << "Adding : " << die[0] << " | " << die[1] << endl;
//		//cout << "Sum = " << sum << endl;
//		return die[0] + die[1];
//	}
//
//	void display() {
//
//		cout << "Sum = " << sum << endl;
//	}
//
//};
//
//int Dice::sum = 0;
//
//int main(){
//	int  n = 0;
//	char ch = ' ';
//	srand(time(0));
//	Dice D1;
//
//	
//	do{
//		while (D1.sum < 21) {
//			//cin.ignore();
//			cout << "Tossing and Adding " << ++n << "th time" << endl;
//			D1.Toss();
//			D1.add();
//
//		}
//
//		D1.display();
//
//		if (D1.sum == 21) {
//			cout << "You won!" << endl;
//		}
//		else {
//			cout << "Better luck next time" << endl;
//		}
//
//		cout << "Play Again?" << endl;
//		cin >> ch;
//		D1.sum = 0;
//	} while (ch == 'y' || ch == 'Y');
//
//	
//
//	return 0;
//}