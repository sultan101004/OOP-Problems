//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//struct Employee {
//	int id;
//	string name;
//	string dept;
//	double salary;
//
//};
//
//struct Department {
//	string name;
//	int no_employees;
//	Employee* employees;
//
//	~Department() {
//		delete[] employees;
//}
//};
//
//void print(Department &dp) {
//	cout << "ID         " << "Name:              " << " Dept:           " << " Salary: " << endl;
//	for (int i = 0; i < dp.no_employees; i++) {
//		cout << "ID : " << setw(4) << dp.employees[i].id << " | " << setw(10) << dp.employees[i].name << setw(10) << " | " << setw(10) << dp.employees[i].dept << "| " << dp.employees[i].salary << endl;
//	}
//	cout << endl << endl;
//}
//
//void insert(Department& d) {
//
//	d.employees = new Employee[d.no_employees];
//
//	for (int i = 0; i < d.no_employees; i++) {
//
//		cout << "Employee no: " << i + 1 << endl;
//
//		cout << "Enter employee id? " << endl;
//		cin >> d.employees[i].id;
//		cin.ignore();
//
//		cout << "Enter employee name?" << endl;
//		getline(cin, d.employees[i].name);
//
//		cout << "Enter Dept? " << endl;
//		//cin.ignore();
//		getline(cin, d.employees[i].dept);
//
//		cout << "Enter salary? " << endl;
//		
//		cin >> d.employees[i].salary;
//		cin.ignore();
//
//	}
//}
//
//void Salary(Department &dp) {
//
//	for (int i = 0; i < dp.no_employees; i++) {
//		if (dp.employees[i].dept == "IT" || dp.employees[i].dept == "it" || dp.employees[i].dept == "It" || dp.employees[i].dept == "iT") {
//			dp.employees[i].salary += dp.employees[i].salary * 0.15;
//			cout << dp.employees[i].name << " " << dp.employees[i].salary << endl;
//		}
//	}
//}
//
//int main() {
//
//	Department d1;
//
//	cout << "Enter department name? " << endl; 
//	getline(cin, d1.name);
//	cout << "Enter number of employees?" << endl;
//	cin >> d1.no_employees;
//
//	insert(d1);
//
//	print(d1);
//
//	Salary(d1);
//
//	return 0;
//}