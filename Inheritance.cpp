//#include<iostream>
//using namespace std;
//
//class Shape {
//protected:
//	int x, y;
//
//public:
//	Shape() {
//		cout << "Shape Constructor" << endl;
//		x = 3; y = 4;
//	}
//	~Shape() {
//		cout << "Shape Destructor" << endl;
//	}
//
//};
//
//class Circle: public Shape {
//	int rad;
//
//public:
//	Circle() {
//		rad = x;
//		cout << "Circle constructor" << endl;
//		cout << "X = " << x << endl;
// 	}
//	~Circle() {
//		cout << "Circle destructor" << endl;
//	}
//
//};
//
//class Rectangle : public Shape {
//public:
//	Rectangle() {
//		cout << "Rectangle constructor" << endl;
//		cout << "X = " << x << " | " << "y = " << y << endl;
//	}
//	~Rectangle() {
//		cout << "Rectangle destructor" << endl;
//	}
//};
//
//class Triangle : public Shape {
//public:
//	Triangle() {
//		cout << "Triangle constructor" << endl;
//		cout << "length = " << x << " | y = " << y << endl;
//	}
//	~Triangle() {
//		cout << "Triangle Destructor " << endl;
//	}
//};
//
//int main() {
//	Triangle t();
//	return 0;
//}