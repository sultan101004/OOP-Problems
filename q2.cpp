//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class Circle {
//	double radius;
//
//
//public:
//	Circle() {
//		radius = 0;
//	}
//	Circle(double rad) : radius(rad) {
//
//	}
//	void setRadius(double r) {
//		radius = r;
//	}
//	double getRadius() {
//		return radius;
//	}
//	void Area() {
//
//		double area;
//		area = (3.142) * pow(radius, 2);
//		cout << "Area = " << area << " units sq." << endl;
//
//	}
//	void Volume() {
//		double vol = 0;
//		vol = (4.0 / 3) * (3.142 * pow(radius, 2));
//		cout << "Volume = " << vol << " units cube." << endl;
//	}
//};
//
//int main() {
//
//	Circle *C1 = new Circle[5];
//	double r;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "Radius?" << endl;
//		cin >> r;
//		C1[i].setRadius(r);
//		cout << C1[i].getRadius() << " units." << endl;
//		C1[i].Area();
//		C1[i].Volume();
//	}
//
//	delete[] C1;
//
//	return 0;
//}