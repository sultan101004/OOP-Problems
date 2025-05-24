#pragma once
#include<iostream>
using namespace std;

//Q1

class Member {
	string name;
	int age;
	int phoneNo;
	string address;
	double salary;
public:
	Member(string name, int age, int phoneNo, string address, double s) {
		this->name = name;
		this->age = age;
		this->phoneNo = phoneNo;
		this->address = address;
		this->salary = s;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Phone No: " << phoneNo << endl;
		cout << "Address: " << address << endl;
		//cout << "Salary: " << salary
	}
	void printSalary(){
		cout << "Salary = $" << salary << endl;
	}


};

class Manager : public Member {
	string dept;

public:
	Manager(string name, int age, int phoneNo, string address, double s, string dept) : Member(name, age, phoneNo, address, s) {
		this->dept = dept;
	}

};

class Employee: public Member {
	int experience;
public:
	Employee(string name, int age, int phoneNo, string address, double s, int experience) : Member(name, age, phoneNo, address, s) {
		this->experience = experience;
	}
};



//Q2

class Student {
	int id;
	string nameSt;

public:
	Student(int id, string name) {
		this->id = id;
		this->nameSt = name;
	}

	int getidSt() {
		return id;
	}
	string getnameSt() {
		return nameSt;
	}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << nameSt << endl;
	}
};

class Course {

	int idCo;
	string nameCo;

public:
	Course(int idCo, string nameCo) {
		this->idCo = idCo;
		this->nameCo = nameCo;
	}

	int  getidCo() {
		return idCo;
	}
	string getnameCo() {
		return nameCo;
	}

	void display() {
		cout << "ID: " << idCo << endl;
		cout << "Name: " << nameCo << endl;
	}
};

class Activity: public Student {
	string actName;

public:
	Activity(int id, string nameSt, string act) : Student(id, nameSt) {
		this->actName = act;
	}

	string getactName() {
		return actName;
	}

	void display() {
		cout << "ID: " << getidSt() << endl;
		cout << "Name: " << getnameSt() << endl;
		cout << "Name: " << actName << endl;
	}

};

class StudentwithCourseandAct : public Student, public Course, public Activity {

	double grade;

public:
	StudentwithCourseandAct(int id, string nameSt, int idCo, string nameCo, string act, double grade) : Student(id, nameSt), Course(idCo, nameCo), Activity(id, nameSt, act) {
		this->grade = grade;
	}

	void displayInfo() {

		cout << "ID Stu   : " << Student::getidSt() << endl;
		cout << "Name Stu : " << Student::getnameSt() << endl;
		cout << "ID Cou   : " << getidCo()  << endl;
		cout << "Name Cou : " << getnameCo() << endl;
		cout << "Name Act : " << getactName() << endl;
		cout << "Grade Stu: " << grade << endl;
	}

};



//Q3

class GenericVehicle {

	int vehicleID;
	string manufacturer;

public:
	GenericVehicle(int id, string manu) {
		this->vehicleID = id;
		this->manufacturer = manu;
	}
	void displayGenericInfo() {

		cout << "Vehicle ID: " << vehicleID << endl;
		cout << "Manufacturer: " << manufacturer << endl;
	}

};

class SpecializedVehicle : public GenericVehicle {

	string specType;

public:
	SpecializedVehicle(int id, string manu, string type) : GenericVehicle(id, manu) {
		this->specType = type;
	}
	void displaySpecializedInfo() {
		cout << "Specialized Type: " << specType << endl;
	}
};

class IndividualVehicleInstance : public SpecializedVehicle {
	int model;
	int YofManufacture;

public:
	IndividualVehicleInstance(int id, string manu, string type, int model, int year) : SpecializedVehicle(id, manu, type) {
		this->model = model;
		this->YofManufacture = year;
	}

	void displayIndividualInfo() {
		
		displayGenericInfo();
		displaySpecializedInfo();
 
		cout << "Model: " << model << endl;
		cout << "Year of Manufacture: " << YofManufacture << endl;
	}
	};



//Q4

class Drink {
	string flavour;
	float temp;
	float price;
	string expiry;

public:

	Drink(string flavour = " ", float temp = 0.0, float price = 0.0, string expiry = " ") {
		this->flavour = flavour;
		this->temp = temp;
		this->price = price;
		this->expiry = expiry;
	}

	string getflavour() {
		return flavour;
	}
	float gettemp() {
		return temp;
	}
	float getprice() {
		return price;
	}
	string getexpiry() {
		return expiry;
	}

	void displayDrink() {
		cout << "Flavour: " << flavour << endl;
		cout << "Temperature: " << temp << endl;
		cout << "Price: $" << price << endl;
		cout << "Expiry: " << expiry << endl;
	}
};

class Water: public Drink {

	string supplier;

public:
	
	Water() : Drink(" ", 0.0, 0.0, " ") {
	this->	supplier = " ";
	}
	Water(string flavour, float temp, float price, string expiry, string supplier) : Drink(flavour, temp, price, expiry) {
		this->supplier = supplier;
	}
	void displayWater() {
		displayDrink();
		cout << "Supplier: " << supplier << endl;
	}

};

class Carbonated : public Water {
	string type;

public:
	Carbonated() : Water(" ", 0.0, 0.0, " ", " ") {
		this->type = " ";
	}
	Carbonated(string flavour, float temp, float price, string expiry, string supplier,  string type) : Water(flavour, temp, price, expiry, supplier) {
		this->type = type;
	}

	void displayCarbonated() {
		displayWater();
		cout << "Type: " << type << endl;
	}

};


