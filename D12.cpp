//#include<iostream>
//using namespace std;
//
//class Payroll {
//	double hourlyrate;
//	double hrs;
//	double total;
//
//public:
//
//	Payroll(double a = 0, double b = 0): hourlyrate(a), hrs(b) {
//		total = (hourlyrate * hrs) * 7;
//	}
//	void setRate(double a) {
//		hourlyrate = a;
//	}
//
//	void setHours(double a) {
//		hrs = a;
//	}
//
//	void setPay(double a, double b) {
//		total = (a * b) * 7;
//	}
//
//	//void display()const {
//	//	cout << "Gross Pay $ : " << total << "  ";
//	////	cout << endl << endl;
//	//}
//
//	void Display()const {
//		cout << hourlyrate << "         " << hrs << "      $" << total << endl;
//	}
//
//	~Payroll() {
//
//	}
//};
//
//int main() {
//	
//	double pr = 0.0, hr = 0.0;
//
//	Payroll* ptr = nullptr;
//
//	cout << "Memory Allocation " << endl;
//	ptr = new Payroll[3];
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Worker : " << i + 1 << endl;
//		cout << "Payrate & Hours?" << endl;
//		cin >> pr >> hr;
//		ptr[i].setRate(pr);
//		ptr[i].setHours(hr);
//		ptr[i].setPay(hr, pr);
//	}
//
//	cout << "Payrate " << " Hours " << " Payment" << endl;
//	for (int i = 0; i < 3; i++) {
//		ptr[i].Display();
//	}
//
//
//	delete[] ptr;
//
//	return 0;
//}