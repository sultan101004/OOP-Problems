//#include<iostream>
//using namespace std;
//
//class Salary {
//public:
//	double sal = 10000;
//};
//
//class Employee {
//public:
//	string name = "Sultan";
//
//};
//class Machines {
//	string name = "Steel Mills";
//};
//
//class Factory {
//	string name = "Refiner";
//	Employee e;				//Composition
//	Salary* s = new Salary; //Aggregation
//public:
//	void startFactory(Machines & c){
//		cout << "Car started.\n";
//	}
//
//	void displayemp(Employee &e) {
//		cout << "Emp name: " << e.name << endl;
//	}
//
//	void showSalary(Salary* s) {
//		cout << "Salary : $ " << s->sal << endl;
//	}
//
//	~Factory() {
//		delete[] s;
//	}
//};
//
//int main() {
//	Salary s;
//	Employee e;
//	Machines c;
//	Factory d;
//
//	d.startFactory(c);
//	d.displayemp(e);
//	d.showSalary(&s);
//
//	return 0;
//}