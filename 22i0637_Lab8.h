#pragma once
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


//Q1

class Complex {

	double real;
	double imag;

public:
	//Constructor
	Complex(double real = 0, double imag = 0) : real(real), imag(imag) {
	//	cout << "Constructor called!" << endl;
	}
	Complex(const Complex& c) : real(c.real), imag(c.imag) {}

	//Accessors and Mutators
	void setReal(double r) {
		real = r;
	}
	double getReal() {
		return real;
	}
	void setImag(double i) {
		imag = i;
	}
	double getImag() {
		return imag;
	}



	//Member functions
	Complex addComplex(double r) {
		return Complex(real + r, imag);
	}

	Complex addComplex(const Complex&  c1) {
		return Complex(real + c1.real, imag + c1.imag);
	}

	Complex subComplex(double r) {
		return Complex(real - r, imag);
	}

	Complex subComplex(const Complex& c1) {
		return Complex(real - c1.real, imag - c1.imag);
	}

	Complex mulComplex(double r) {
		return Complex(real * r, imag * r);
	}

	Complex mulComplex(const Complex& c1) {
		return Complex(real * c1.real - imag * c1.imag, real * c1.imag + imag * c1.real);
	}

	void display() {
		cout << "Real: " << real << " Imaginary: " << imag << endl;
	}

	//Destructor
	~Complex() {
	//	cout << "Destructor called!" << endl;
	}
};

//Q2

class employee {
	int empid;
	string name;
	string dept;
	static int count;

public:
	
	//constructor
	employee( string b = "john", string c = "it") : name(b), dept(c) {
		empid = count + 1;
		count++;
	}
	employee(const employee& e) : empid(e.empid), name(e.name), dept(e.dept) {
		empid = count + 1;
		count++;
	}
	
	//accessors and mutators
	void setname(string a) {
		name = a;
	}
	string getname() {
		return name;
	}
	void setdept(string a) {
		dept = a;
	}
	string getdept() {
		return dept;
	}
	int getid() {
		return empid;
	}
	static int getcount() {
		return count;
	}


	//member functions
	void insertion(employee *&e,int x) {
		string a, b;

		for (int i = 0; i < x; i++) {
			cin.ignore();
			cout << "enter name of employee " << i + 1 << " : " << endl;
			getline(cin, a);
			e[i].setname(a);

			cout << "enter department of employee " << i + 1 << " : " << endl;
			getline(cin, b);
			e[i].setdept(b);

		}
	}
	void display() {

		cout << "name        : " << " " << "department    : " << " " << "employee id : " << endl;
		for (int i = 0; i < count; i++) {
			cout << setw(14) << left << this[i].name << " " << setw(14) << this[i].dept <<  "   " << setw(12) << this[i].empid << endl;
		}

		cout << endl << endl;
	}


//destructor
	~employee() {
		cout << "d :)" << endl;
	}

};

int employee::count = 0;

class project {

	int projid;
	employee* emp;
	
	void addemployee(int a) {
		emp = new employee[a];
	}

public:
	
	//constructor
	project(int a) : projid(a) {
		
		int x = 0;
		cout << "no of employee?" << endl;
		cin >> x;
		addemployee(x);

		//data insertion
		emp->insertion(emp, x);

	}
	employee* getemp() {
		return emp;
	}
	//accessors and mutators
	
	//member functions
	void displayproj() {
		cout << "project id : " << projid << endl;
		this->emp->display();
	}
	//destructor
	~project() {
		delete [] emp;
	}

};

//Q3

class Students {

	int id;
	string name;
	double gpa;
	int c;
	int *courses;
	
	void setcourses(int a) {
		courses = new int[a];
		cout << "Enter courses no!" << endl;
		for (int i = 0; i < a; i++) {
			cout << "Course " << i + 1 << " : " << endl;
			cin >> courses[i];
		
		}
	}

public:

	//constructor
	Students() : name("John"), gpa(0.0), id(0), c(0) {
		//c = 0;
		courses = nullptr;
	}

	Students(int i , string b, double y) : name(b), gpa(y), id(i){
		//int y = 0;
		cout << name << " has how many Courses ? " << endl;
		cin >> c;
		setcourses(c);
	}

	//Accessors and Mutators
	void setname(string a) {
		name = a;
	}
	string getname() {
		return name;
	}
	void setgpa(double a) {
		gpa = a;
	}
	double getgpa() {
		return gpa;
	}
	int getid() {
		return id;
	}
	//other functions

	void display() {

		cout << "ID : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "GPA : " << gpa << endl;

		if (courses != nullptr) {
			cout << "Courses : " << endl;
			for (int i = 0; i < c; i++) {
				cout << courses[i] << " ";
			}
			cout << endl;
		}
		else {
			cout << "No courses!" << endl;
		}
	}

	//destructor
	~Students() {
		delete[]courses;
	}

};



