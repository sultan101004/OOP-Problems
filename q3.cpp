//#include<iostream>
//using namespace std;
//
//class Shape {
//
//protected:
//	string name;
//public:
//	Shape(string n = "None") { name = n; }
//	virtual double area() = 0;
//	virtual double volume() = 0;
//	virtual void display() = 0;
//	virtual ~Shape() = default;
//};
//
//class Circle : public Shape {
//
//private:
//	double radius;
//public:
//	Circle(string n  = "",double r = 0) :Shape (n), radius(r) {}
//	double area()override { return 3.14 * radius * radius; }
//	double volume()override { return 4 / 3 * 3.14 * radius * radius * radius; }
//	void display()override {
//		cout << "Circle name = " << name << endl;
//		cout << "Circle radius = " << radius << endl;
//		cout << "Circle area = " << area() << endl;
//		cout << "Circle volume = " << volume() << endl;
//	}
//};
//
//class Rectangle : public Shape {
//
//private:
//	double length;
//	double width;
//	double height;
//public:
//	Rectangle(string n = "", double l = 0, double w = 0, double h = 0) :Shape(n), length(l), width(w), height(h) {}
//	double area()override { return length * width; }
//	double volume()override { 
//		return length * width * height; }
//	void display()override {
//		cout << "Rectangle name = " << name << endl;
//		cout << "Rectangle length = " << length << endl;
//		cout << "Rectangle width = " << width << endl;
//		cout << "Rectangle area = " << area() << endl;
//		cout << "Rectangle volume = " << volume() << endl;
//	}
//};
//
//class Triangle : public Shape {
//private:
//	double base;
//	double height;
//public:
//	Triangle(string n = "", double b = 0, double h = 0) :Shape(n), base(b), height(h) {}
//	double area()override { return 0.5 * base * height; }
//	double volume()override { return 0; }
//	void display()override {
//		cout << "Triangle name = " << name << endl;
//		cout << "Triangle base = " << base << endl;
//		cout << "Triangle height = " << height << endl;
//		cout << "Triangle area = " << area() << endl;
//		cout << "Triangle volume = " << volume() << endl;
//	}
//
//};
//
//int main() {
//
//	Shape *s1 = new Circle("Circle", 5);
//	Shape *s2 = new Rectangle("Rectangle", 4, 5, 6);
//	Shape *s3 = new Triangle("Triangle", 4, 5);
//	s1->display();
//	s2->display();
//	s3->display();
//
//	delete s1;
//	delete s2;
//	delete s3;
//
//	return 0;
//
//}