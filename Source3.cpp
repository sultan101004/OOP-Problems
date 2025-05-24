//#include<iostream>
//using namespace std;
//
//class Printable {
//	friend ostream& operator<<(ostream& os, const Printable& obj);	
//public:
//	virtual void print(ostream &os) const = 0;
//	virtual ~Printable(){}
//};
//
//ostream& operator<<(ostream& os, const Printable& obj) {
//	obj.print(os);
//	return os;
//}
//
//class A: public Printable {
//public:
//	virtual void print(ostream &os) const override {
//		os << "Hey there! It's working." << endl;
//	}
//};
//
//
//int main() {
//
//	Printable* a = new A();
//	cout << *a << endl;
//
//	return 0;
//}