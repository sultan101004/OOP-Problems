//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class IllegalError {
//
//public:
//	IllegalError() {
//	
//	}
//	virtual void what() {
//		cout << "Zero Error\n";
//	}
//	~IllegalError() {
//
//	}
//};
//
//
//class Account: public IllegalError {
//	string name = "None";
//	int age = 0;
//	double amount = 0.0;
//	int withdraws = 0;
//
//public:
//	Account(string a = "None", int b = 0, double c = 0.0, int d = 0) : name(a), age(b), amount(c), withdraws(d) {
//		cout << "Account Constructor called for : " << name << "\n";
//		
//	}
//
//	double setAmount(double am) {
//		if (am < 0) {
//			throw IllegalError();
//
//		}
//		return am;
//	}
//
//	bool setDetails(string a, int b, double c, int d) {
//		name = a;
//		age = b;
//		amount = c;
//		withdraws = d;
//
//	}
//
//	~Account() {
//		cout << "Account Destructor called for : " << name << "\n";
//	}
//
//};
//
//
//int main() {
//	int amt;
//	Account Acc("Sultan", 22, 0, 0);
//	try {
//		
//		amt = Acc.setAmount(1);
//	}
//	catch (const IllegalError& ex) {
//		cerr << "Error, invalid Input for Amount!\n";
//	}
//
//	cout << "Ok" << endl;
//
//}