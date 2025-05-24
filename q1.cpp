//#include<iostream>
//using namespace std;
//
//class Employee {
//
//protected: 
//	double per_hour;
//	//int hours;
//public:
//	Employee( double ph = 0) { per_hour = ph; }
//	virtual void calculateSalary( int hr) = 0;
//	virtual void displayDetails() = 0;
//	virtual ~Employee() {}
//};
//
//class Manager: public Employee {
//	double salary;
//public:
//	Manager( double ph = 0): Employee( ph) {}
//	void calculateSalary(int hr)override {
//		salary = per_hour * hr;
//	}
//
//	void displayDetails()override {
//		cout << "Manager salary = $" << salary << endl;
//	}
//};
//
//class Developer : public Employee {
//	double salary;
//public:
//	Developer( double ph = 0) : Employee( ph) {}
//	void calculateSalary(int hr)override {
//		salary = per_hour * hr;
//	}
//	void displayDetails()override {
//		cout << "Developer's salary = $" << salary << endl;
//	}
//};
//
//class Salesperson : public Employee {
//	double salary;
//public:
//	Salesperson(double ph = 0) : Employee(ph) { salary = 0; }
//	void calculateSalary(int hr) {
//		salary = per_hour * hr;
//	}
//	void displayDetails() {
//		cout << "Salesperson's salary = $" << salary << endl;
//	}
//};
//
//int main() {
//
//	Employee* emp[3];
//	emp[0] = new Manager( 100);
//	emp[1] = new Developer( 200);
//	emp[2] = new Salesperson( 300);
//
//	for (int i = 0; i < 3; i++) {
//		emp[i]->calculateSalary(10);
//		emp[i]->displayDetails();
//	}
//
//	delete emp[0];
//	delete emp[1];
//	delete emp[2];
//
//	return 0;
//}