//#include<iostream>
//#include<cstdlib>
//#include<cmath>
//using namespace std;
//
//class Question {
//	string question;
//	string a1;
//	string a2;
//	string a3;
//	string a4;
//	int correctAns;
//
//public:
//
//	Question(string q = "", string a = "", string b = "", string c = "", string d = "", int correct = 0):question(q), a1(a),a2(b), a3(c), a4(d), correctAns(correct)  {
//	}
//
//	void showQuestion()const {
//		cout << "Q. " << question << endl;
//		cout << "1. " << a1 << " 2. " << a2 << " 3. " << a3 << " 4. " << a4 << endl;
//	//	return correctAns;
//	}
//
//	bool checkAns()const {
//		
//		int ans = 0;
//		cout << "Enter (1-4) " << endl;
//		cin >> ans;
//		if (ans == correctAns) {
//			return true;
//		}
//		else{
//			return false;
//		}
//
//	}
//
//	void displayAns()const {
//		cout << "Answer for " << correctAns << endl;
//	}
//
//		
//};
//
//
//
//
//
//int main() {
//	
//	Question ptr[10] = {Question("Where can I find Imported Saman?", "Mtn", "Atd", "Quetta", "Isb",3),Question("Where can I find Monal Restaurant?", "Mtn", "Atd", "Quetta", "Isb",4), Question("What is the capital of Balochistan?", "Mtn", "Atd", "Quetta", "Isb",3), Question("Where can I find Hanna Lake? ?", "Mtn", "Atd", "Quetta", "Isb",3), Question("Where can I find Datta Darbar?", "Mtn", "Atd", "Quetta", "Isb",1), Question("Where can I find Balochi-Sajji?", "Mtn", "Atd", "Quetta", "Isb",3), Question("Where can I find Sohan-Halwa?", "Mtn", "Atd", "Quetta", "Isb",1), Question("Which is the best city?", "Mtn", "Atd", "Quetta", "Isb",2), Question("What is the capital of Pakistan?", "Mtn", "Atd", "Quetta", "Isb",4), Question("What is short form of Abbottabad?", "Mtn", "Atd", "Quetta", "Isb",2), };
//	//ptr = new Question[10];
//	
//	int p1 = 0;
//	int p2 = 0;
//
//	int t = 1;
//
//	cout << "P1" << endl;
//	while (t--) {
//
//		for (int i = 0; i < 5; i++) {
//			ptr[i].showQuestion();
//			if (ptr[i].checkAns()) {
//				++p1;
//			}
//			
//		}
//	}
//	t = 1;
//	cout << "P2" << endl;
//	while (t--) {
//
//		for (int i = 5; i < 9; i++) {
//			ptr[i].showQuestion();
//			if (ptr[i].checkAns()) {
//				++p2;
//			}
//
//		}
//	}
//	cout << "P1 = " << p1 << ", P2 = " << p2 << endl;
//
//	if (p1 > p2) {
//		cout << "Player 1 wins" << endl;
//	}
//	else if (p1 < p2) {
//		cout << "Player 2 wins" << endl;
//	}
//	else {
//		cout << "Match tied" << endl;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << endl;
//		cout << "Q# " << i + 1 << " Ans = "; 
//		ptr[i].displayAns();
//	}
//
//	return 0;
//}
