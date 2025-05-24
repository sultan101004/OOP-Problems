//#include<iostream>
//using namespace std;
//
//class Part {
//
//	int a;
//
//public:
//	//constructor
//	Part(int a = 0): a(a) {
//		cout << "Constructor Part" << endl;
//		this->a = a;	
//	}
//	//member function
//	void show() {
//		cout << a << endl;
//	}
//	//destructor
//	~Part() {
//		cout << "Destructor Part" << endl;
//		delete this;
//	}
//};
//
//class Whole {
//	Part* p;
//
//public:
//	Whole(int a = 1) {
//		cout << "Constructor Whole" << endl;
//		p = new Part(a);
//
//	}
//	void display() {
//		p->show();
//	}
//	~Whole() {
//		delete p;
//		cout << "Destructor Whole" << endl;
//	}
//};
//int main() {
//
//	Whole w;
//	w.display();
//
//	
//	return 0;
//}