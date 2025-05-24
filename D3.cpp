//#include<iostream>
//using namespace std;
//
//class B;
//
//class A {
//	int a;
//
//public:
//	A(int x = 0): a(x) {
//
//	}
//
//	void add(const B&, const A&);
//	
//	int getA()const {
//		return a;
//	}
//};
//
//class B {
//	int b;
//
//public:
//	B(int x = 0):b(x){}
//	int getB()const {
//		return b;
//	}
//	friend void A::add(const B&, const A&);
//};
//
//void A::add(const B& x, const A& y) {
//	cout << "Sum = " << x.getB() + y.getA() << endl;
//}
//
//
//int main() {
//
//	A he(3);
//	B she(2);
//	he.add(she, he);
//
//	return 0;
//}