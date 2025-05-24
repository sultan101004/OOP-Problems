//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class Mortrage {
//	int years;
//	double rate;
//	double loan;
//	double term;
//
//	void setting() {
//
//		cout << "Enter loan?" << endl;
//		cin >> loan;
//		cout << "Enter Rate?" << endl;
//		cin >> rate;
//		rate = rate / 100;
//		cout << "Enter years?" << endl;
//		cin >> years;
//		term = pow((1 + (rate / 12)), (12 * years));
//		
//	}
//public:
//	static double total;
//	Mortrage() {
//		setting();
//		
//	}
//	Mortrage(double a, int b, double c) : loan(a), years(b), rate(c) {
//		term = pow((1 + (rate / 12)), (12 * years));
//		
//		
//	}
//	double monthlyPay()const {
//		total = ((loan * (rate / 12) * term) / (term - 1)) * (years * 12);
//		return ((loan * (rate / 12) * term) / (term - 1));
//	}
//	void Total() {
//		cout << "Total : " << total << endl;
//	}
//};
//
//double Mortrage::total = 0;
//int main() {
//
//	Mortrage M1;
//	cout << "Monthly Payment: " << M1.monthlyPay() << endl;
//	M1.Total();
//
//	return 0;
//}
//
