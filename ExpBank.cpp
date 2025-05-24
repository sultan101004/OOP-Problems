//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//
//	int age;
//	string name;
//	string email;
//
//public:
//	Person(int ag = 0, string nm = "No name", string em = "No email") : age(ag), name(nm), email(em) {
//		cout << "Person Constructor\n";
//	}
//	void setage(int ag) {
//		age = ag;
//	}
//	int getage() {
//		return age;
//	}
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setEmail(string em) {
//		email = em;
//	}
//	string getemail() {
//		return email;
//	}
//	friend ostream& operator<<(ostream& os, Person& p) {
//		os << "Age : " << p.age << ", Name : " << p.name << ", Email : " << p.email << endl;
//		return os;
//	}
//	~Person() {
//		cout << "Person destructor\n";
//	}
//};
//
//class Class {
//	string Dept;
//	char Block;
//	int Grade;
//	Person* Per;
//
//public:
//	Class(string dp, char bl, int gr, Person* p) : Dept(dp), Block(bl), Grade(gr), Per(p) {
//		cout << "Class Constructor\n";
//	}
//
//	void setDept(string d) {
//		Dept = d;
//	}
//	string getDept() {
//		return Dept;
//	}
//	void setBlock(char b) {
//		Block = b;
//	}
//	char getBlock() {
//		return Block;
//	}
//	void setGrade(int g) {
//		Grade = g;
//	}
//	int getGrade() {
//		return Grade;
//	}
//	void setPerson(Person* p) {
//		Per = p;
//	}
//	Person* getPerson() {
//		return Per;
//	}
//	friend ostream& operator<<(ostream& os, Class& c) {
//		os << "Department : " << c.Dept << ", Block : " << c.Block << ", Grade : " << c.Grade << endl;
//		for (int i = 0; i < 5; i++) {
//			os << c.Per[i];
//		}
//		return os;
//	}
//	~Class() {
//		cout << "Class Destructor\n";
//		//delete Per;
//	}
//};
//
//class Department {
//	string name;
//	int id;
//	Class* classes;
//public:
//	Department(string n = "", int i = 0, Class* c = nullptr) : name(n), id(i), classes(c) {
//		cout << "Department Constructor\n";
//	}
//
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setID(int i) {
//		id = i;
//	}
//	int getID() {
//		return id;
//	}
//	void setClasses(Class* c) {
//		classes = c;
//	}
//	Class* getClasses() {
//		return classes;
//	}
//
//	friend ostream& operator<<(ostream& os, Department& d) {
//		os << "Department Name : " << d.name << ", ID : " << d.id << endl;
//		for (int i = 0; i < 4; i++) {
//			os << d.classes[i];
//		}
//		
//		return os;
//	}
//
//	~Department() {
//		cout << "Department Destructor\n";
//		delete []classes;
//	}
//	
//};
//
//class University {
//	int branchNum;
//	string name;
//	string location;
//	Department* departments;
//public:
//	University(string nm = "", string loc = "", int num = 0, Department* d = nullptr) : name(nm), location(loc), branchNum(num), departments(d) {
//		cout << "University Constructor\n";
//	}
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setBranchNum(int n) {
//		branchNum = n;
//	}
//	int getBranchNum() {
//		return branchNum;
//	}
//	void setLoc(string loc) {
//		location = loc;
//	}
//	string getLoc() {
//		return location;
//	}
//	void setDept(Department* d) {
//		departments = d;
//	}
//	Department* getDept() {
//		return departments;
//	}
//	friend ostream& operator<<(ostream& os, University& u) {
//		os << "University Name : " << u.name << ", Location : " << u.location << ", Branch Number : " << u.branchNum << endl;
//		for (int i = 0; i < 1; i++) {
//			os << u.departments[i];
//		}
//		return os;
//	}
//	~University() {
//		cout << "University Destructor\n";
//		delete []departments;
//	}
//};
//
//class Country {
//	string name;
//	int population;
//	University* universities;
//
//public:
//	Country(string n = "", int pop = 0, University* u = nullptr) : name(n), population(pop), universities(u) {
//		cout << "Country Constructor\n";
//	}
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setPopulation(int p) {
//		population = p;
//	}
//	int getPopulation() {
//		return population;
//	}
//	void setUniversities(University* u) {
//		universities = u;
//	}
//	University* getUniversities() {
//		return universities;
//	}
//	friend ostream& operator<<(ostream& os, Country& c) {
//		os << "Country Name : " << c.name << ", Population : " << c.population << endl;
//		for (int i = 0; i < 1; i++) {
//			os << c.universities[i];
//		}
//		return os;
//	}
//
//	~Country() {
//	cout << "Country Destructor\n";
//		delete []universities;
//	}
//};
//
//int main() {
//
//	Person* ptr = new Person[12]{
//	{22, "Sultan Shah", " barak@gmail.com" },
//	{20, "Samad Shah", " Samad@gmail.com"},
//	{21, "Jameel Shah", " Jameel@gmail.com" },
//	{23, "Zuraiz Shah", " Zuraiz@gmail.com"},
//	{19, "Jibran Shah", " Jibran@gmail.com"},
//	{25, "Zainab Shah", " Zainab@gmail.com"},
//	{24, "Areeba Shah", " Areeba@gmail.com"},
//	{26, "Fatima Shah", " Fatima@gmail.com"},
//	{27, "Aisha Shah", " Aisha@gmail.com"},
//	{28, "Fatima Shaikh", " Shaikh@gmail.com"},
//	{29, "Halima Khan", " Halima@gmail.com"},
//	{30, "Zainab Khan", " Zainab@gmail.com"},
//	};
//	
//	Class* ptr2 = new Class[4]{
//	{"CS", 'A', 1, ptr},
//	{"IT", 'B', 2, ptr + 5},
//	{"SE", 'C', 3, ptr + 10},
//	{"AI", 'D', 4, ptr + 15}
//	};
//
//	Department* ptr3 = new Department[1]{
//	{"Computer Science", 101, ptr2}
//	};
//	cout << ptr3[0];
//
//
//
//	delete[] ptr;
//	delete[] ptr2;
//	delete[] ptr3;
//
//	return 0;
//
//}