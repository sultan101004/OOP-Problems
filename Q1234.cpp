#include<iostream>
#include"22i0637_Lab11.h"
using namespace std;

int main() {

	//Q1
	cout << endl;
	cout << "Qs 1" << endl;
	Manager m1("A", 20, 1234567890, "A", 10000, "A");
	m1.printSalary();

	Employee e1("A", 20, 1234567890, "A", 12000, 2);
	e1.printSalary();

	//Q2
	cout << endl;
	cout << endl << "Qs 2" << endl;
	StudentwithCourseandAct student(1, "Sultan", 2, "C++", "Bugging", 3.5);
	student.displayInfo();

	//Q3
	cout << endl;
	cout << endl << "Qs 3" << endl;
	GenericVehicle gv(1, "Honda");
	IndividualVehicleInstance ivi(3, "Honda", "SUV", 2022, 2022);
	ivi.displayIndividualInfo();

	//Q4
	cout << endl;
	cout << endl << "Qs 4" << endl;
	Carbonated c1(" Coke", 20.0, 3.40, " 12/11/2024", " Cola Co."," Sugar-Free");
	c1.displayCarbonated();

	return 0;
}