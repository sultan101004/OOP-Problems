//#include<iostream>
//using namespace std;
//
//class Person {
//protected:
//	string name;
//public:
//	Person(string n = "None") { name = n; }
//	virtual void display()const = 0;
//	virtual ~Person(){}
//
//};
//
//class Student : public Person {
//
//private:
//	double gpa;
//public:
//	Student(string n = "None", double g = 0.0) :Person(n) { gpa = g; }
//	void display()const override { cout << "Name = " << name << endl; cout << "GPA = " << gpa << endl; }
//};
//
//int main() {
//
//	Person* p1[3];
//
//	p1[0] = new Student("John", 3.5);
//	p1[1] = new Student("Jane", 3.8);
//	p1[2] = new Student("Jack", 3.2);
//
//	for (int i = 0; i < 3; i++) {
//		p1[i]->display();
//		delete p1[i];
//	}
//
//
//
//	return 0;
//}