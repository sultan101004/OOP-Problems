//#include<iostream>
//using namespace std;
//
//class Car {
//	int model;
//	string make;
//	int speed;
//
//	Car Accessor()const  {
//		return *this;
//	}
//
//	void Mutator(const Car& other) {
//		
//		model = other.model;
//		make = other.make;
//		speed = other.speed;
//
//	}
//public:
//
//	Car(int a = 0, string b = "", int c = 0) : model(a), make(b), speed(c){}
//	
//	void accelarate() {
//		speed += 5;
//		cout << "Speed After Accelarate = " << speed << endl;
//	}
//
//	void brake() {
//		speed -= 5;
//		cout << "Speed After Brake = " << speed << endl;
//	}
//
//	void display()const {
//
//		cout << "Car Model: " << model << endl;
//		cout << "Car make: " << make << endl;
//		cout << "Car speed: " << speed << endl;
//		cout << endl << endl;
//
//	}
//
//};
//
//int main() {
//
//	Car C1(2017, "Honda Civic X", 140);
//	Car C2(2022, "Honda Type R", 80);
//	Car C3(2010, "Honda Accord", 20);
//	
//
//	C1.display();
//	C1.accelarate();
//	C1.brake();
//	return 0;
//}