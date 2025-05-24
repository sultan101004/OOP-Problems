//#include<iostream>
//using namespace std;
//
//class Account {    //abstract class 
//protected:
//	string name;
//	double balance;
//public:
//	Account(const string& a, double bal = 0) :name(a), balance(bal) {}
//	virtual void withdraw(double amount) = 0;
//	virtual void deposit(double amount) = 0;
//	virtual ~Account() {}
//};
//
//class Saving_Account : public Account {
//	double rate;
//public:
//	Saving_Account(const string& a, double bal = 0, double r = 0) :Account(a, bal), rate(r) {}
//	void withdraw(double amount)override {
//		balance -= amount;
//		cout << "Saving Account withdrawl " << endl;
//		cout << "new balance: " << balance << endl;
//	}
//	void deposit(double amount)override {
//		balance += amount;
//		cout << "Saving Account deposit " << endl;
//		cout << "new balance: " << balance << endl;
//	}
//	~Saving_Account() {}
//};
//
//class Checking_Account : public Account {
//	double rate;
//public:
//	Checking_Account(const string& a, double bal = 0, double r = 0) :Account(a, bal), rate(r) {}
//	void withdraw(double amount)override {
//		balance -= amount;
//		cout << "Checking Account withdrawl " << endl;
//		cout << "new balance: " << balance << endl;
//	}
//	void deposit(double amount)override {
//		balance += amount;
//		cout << "Checking Account deposit " << endl;
//		cout << "new balance: " << balance << endl;
//	}
//	~Checking_Account() {}
//};
//
//int main() {
//
//	Account* ptr[2];
//	ptr[0] = new Saving_Account("Savings Account", 1000, 0.05);
//	ptr[1] = new Checking_Account("Checking Account", 2000, 0.01);
//
//	Account* array[2] = { ptr[0], ptr[1] };
//	for (int i = 0; i < 2; i++) {
//		array[i]->deposit(1000);
//		array[i]->withdraw(200);
//		//delete ptr[i];
//	}
//	delete ptr[0];
//	delete ptr[1];
//
//	return 0;
//}
