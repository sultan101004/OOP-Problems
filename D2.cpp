//#include<iostream>
//using namespace std;
//
//class Square;
//
//class Shape {
//	int area;
//
//public:
//	Shape() :area(0) {
//		cout << "Shape called" << endl;
//	}
//
//	void setArea(const Square& obj);
//
//	int getArea()const {
//		return area;
//	}
//
//	~Shape() {
//		cout << "Shape destroyed" << endl;
//	}
//};
//
//
//class Square {
//	int x;
//
//public:
//	Square(double a = 0) :x(a) {
//		cout << "Square called" << endl;
//		setX();
//	}
//
//	void setX() {
//		cout << "Enter value for X. " << endl;
//		cin >> x;
//	}
//
//	int getX()const {
//		return x;
//	}
//
//	friend void Shape::setArea(const Square&obj);
//
//	~Square() {
//		cout << "Square destroyed" << endl;
//	}
//};
//
//void Shape::setArea(const Square& obj) {
//	area = obj.getX() * obj.getX();
//	cout << "Area : " << area << endl;
//}
//
//int main() {
//
//	Square S1;
//	Shape S;
//	S.setArea(S1);
//	//cin.ignore();
//	//cin.get();
//
//	return 0;
//}