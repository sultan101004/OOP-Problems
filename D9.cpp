//#include<iostream>
//using namespace std;
//
//class Circle {
//	double radius;
//	const double pi = 3.142;
//
//	double getRadius()const {
//		return radius;
//	}
//public:
//	Circle(double a = 0.0) :radius(a) {
//	}
//	void setRadius(double r) {
//		radius = r;
//	}
//	
//	double Area()const {
//		return (radius * radius * pi);
//	}
//	double Volume()const  {
//		return ((4.0 / 3) * pi * (radius * radius));
//	}
//	void display()const {
//		cout << "Radius: " << radius << endl;
//		cout << endl << endl;
//	}
//};
//
//int main() {
//
//	Circle C;
//	C.display();
//	C.setRadius(3);
//	cout << "Area   : " << C.Area();
//	cout << endl;
//	cout << "Volume : " << C.Volume();
//	cout << endl;
//	C.display();
//	
//	return 0;
//}