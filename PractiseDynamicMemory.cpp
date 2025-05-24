#include<iostream>
#include<string>

using namespace std;

class Person {

	string name;
	int age;

public:
	Person(string n = "", int a = 0) : name(n), age(a) {
		cout << "Person Constructor\n";
	}

	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setAge(int a) {
		age = a;
	}
	int getAge() {
		return age;
	}
	friend ostream& operator<<(ostream& os, Person& p) {
		os << "Name : " << p.name << ", Age : " << p.age << endl;
		return os;
	}
	~Person() {
		cout << "Person Destructor\n";
	}
};

class Home {

	string address;
	int rent;
	Person* person;

public:
	Home(string a = "", int r = 0, Person* p = nullptr) : address(a), rent(r), person(p) {
		cout << "Home Constructor\n";
	}

	void setAddress(string a) {
		address = a;
	}
	string getAddress() {
		return address;
	}
	void setRent(int r) {
		rent = r;
	}
	int getRent() {
		return rent;
	}
	void setPerson(Person* p) {
		person = p;
	}
	Person* getPerson() {
		return person;
	}
	friend ostream& operator<<(ostream& os, Home& h) {
		os << "Address : " << h.address << ", Rent : " << h.rent << endl;
		for (int i = 0; i < 1; i++) {
			os << h.person[i];
		}
		return os;
	}
	~Home() {
	//	delete[]person;
		cout << "Home Destructor\n";
	}
};

class Earth {
	string name;
	int population;
	Home* home;

public:
	Earth(string n = "", int p = 0, Home* h = nullptr) : name(n), population(p), home(h) {
		cout << "Earth Constructor\n";
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setPopulation(int p) {
		population = p;
	}
	int getPopulation() {
		return population;
	}
	void setHome(Home* h) {
		home = h;
	}
	Home* getHome() {
		return home;
	}
	friend ostream& operator<<(ostream& os, Earth& e) {
		os << "Earth Name : " << e.name << ", Population : " << e.population << endl;
		for (int i = 0; i < 1; i++) {
			os << e.home[i];
		}
		return os;
	}
	~Earth() {
		delete [] home->getPerson();
		delete home;
		
		cout << "Earth Destructor\n";
	}
};

int main() {

	Person* p1 = new Person[1]{ {"Sulta", 21} };
	Home *h1 = new Home("Kolkata", 2000, p1);
	Earth e1("Earth", 1000000, h1);

	cout << e1;

//	delete[]p1;

	return 0;
}