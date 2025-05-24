#include<iostream>
using namespace std;

//Multiple Inheritence
//class Cat {
//
//public:
//	void speak() {
//		cout << "Meow!\n";
//	}
//};
//
//class Dog {
//
//public:
//	void speak() {
//		cout << "Bark!\n";
//	}
//};
//
//class Animal : public Cat, public Dog {
//
//};
//
//int main() {
//	Animal an;
//	an.Cat::speak();
//}


//Diamond Problem

//class A {
//public:
//	void func() {
//		cout << " A \n";
//	}
//};
//
//class B : public A {
//public:
//	void func() {
//		cout << " B \n";
//	}
//};
//class C: public A{
//public:
//	void func() {
//		cout << " C \n";
//	}
//};
//class D : public B, public C {
//public:
//	void func() {
//		cout << " D \n";
//	}
//};
//
//int main() {
//
//	D d1;
////	d1.A::func();
//
//
//	return 0;
//}

//Diamond Problem using virtual method
//class A {
//public:
//	void func() {
//		cout << " A \n";
//	}
//};
//
//class B :public virtual A{
//public:
//	void func1() {
//		cout << " B \n";
//	}
//};
//
//class C : public virtual A {
//public:
//	void func2() {
//		cout << " C \n";
//	}
//};
//
//class D : public B, public C {
//public:
//	void func4() {
//		cout << " D \n";
//	}
//};
//
//int main() {
//
//	D d;
//	d.func();
//
//}

class PoweredDevice {

public:
	void PowerOn() {
		cout << " On\n";
	}
	void PowerOff() {
		cout << " Off\n";
	}
};

class Printer: virtual public PoweredDevice{

public:
	void Print() {
		cout << " Print\n";
	}
};

class Scanner : virtual public PoweredDevice {

public:
	void Scan() {
		cout << " Scan\n";
	}
};

class Copier : public Printer, public Scanner {

public:
	void copying() {
		cout << "Copy\n";
	}

};

int main() {

	Copier c;
	c.PowerOff();
	c.PowerOn();

	return 0;
}