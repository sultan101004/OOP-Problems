//#include<iostream>
//#include<string>
//using namespace std;
//
//class Retail {
//	string discription;
//	int unitsonHand;
//	double price;
//
//	string getname()const {
//		return discription;
//	}
//	int getUnits()const  {
//		return unitsonHand;
//	}
//	double getPrice()const {
//		return price;
//	}
//
//public:
//
//
//	double calc(int qty, double price)const {
//		double total = qty * price;
//		//cout << "Total = $" << total << endl;
//		return total;
//	}
//	void setDisc(string &a) {
//		discription = a;
//	}
//	void setUnits(int& a) {
//		unitsonHand = a;
//	}
//
//	void setPrice(double & a) {
//		price = a;
//	}
//
//	static int n;
//
//	Retail(string a = "", int b = 0, double c = 0.0) : discription(a), unitsonHand(b), price(c) {}
//	
//	void display()const  {
//		
//		//for (int i = 1; i <= 3; i++) {
//			cout << "      " << discription << "      " << unitsonHand << "      $" << calc(unitsonHand, price) << endl;
//			
//	}
//	
//	
//};
//int main() {
//
//	Retail* ptr = new Retail[3];
//	cout << "Enter the values for :" << endl;
//	string a = "";
//	int b = 0;double c = 0.0;
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "Disc?" << endl;
//		cin>> a;
//		cin.ignore(0);
//		ptr[i].setDisc(a);
//		cout << "Units?" << endl;
//		cin >> b;
//		ptr[i].setUnits(b);
//		cout << "Price($)?" << endl;
//		cin >> c;
//		ptr[i].setPrice(c);
//	}
//
//	cout << "Items # " << "Disc   " << "Units   " << "Price($)   " << endl;
//	for (int i = 0; i < 3; i++) {
//		
//		ptr[i].display();
//	}
//
//	//for (int i = 0; i < 3; i++) {
//		delete [] ptr;
////	}
//
//	return 0;
//}