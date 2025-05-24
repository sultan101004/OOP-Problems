//#include<iostream>
//#include<string>
//using namespace std;
//
//class Patient {
//	double charges;
//	int days;
//	static double rate;
//
//public:
//	Patient():charges(0),days(0){}
//	void setDays() {
//
//		cin >> days;
//		while (days < 0) {
//			cout << "Enter days again, (Days should be positive)" << endl;
//			cin >> days;
//		}
//		charges = rate * days;
//	}
//	void setCharges(double amount) {
//		charges += amount;
//	}
//	double getCharges()const {
//		return charges;
//	}
//};
//
//double Patient::rate = 650;
//
//class Surgery {
//	static double sur[5];
//
//public:
//	void addSurgeryCharges(Patient& account, int surgery) {
//
//		while (surgery < 0 || surgery > 4) {
//			cout << "Enter surgeries within range (0-4)" << endl;
//			cin >> surgery;
//		}
//		account.setCharges(sur[surgery]);
//	}
//};
//
//double Surgery::sur[5] = { 22.1, 40, 50.3, 60, 100 };
//
//class Pharmacy {
//	static double med[5];
//
//public:
//	void addPharmacyCharges(Patient& account, int pharmacy) {
//		
//		while (pharmacy < 0 || pharmacy > 4) {
//			cout << "Enter medicines within range (0-4)" << endl;
//			cin >> pharmacy;
//		}
//		
//		account.setCharges(med[pharmacy]);
//	}
//};
//
//double Pharmacy::med[5] = { 20.5, 45.2, 50.5, 65, 110 };
//int main() {
//
//
//	Patient P1;
//	Surgery S;
//	Pharmacy P;
//	int s = 0, m = 0;
//	cout << "Enter the days? " << endl;
//	P1.setDays();
//	P1.getCharges();
//	cout << endl;
//	cout << "Enter type of Surgery(1-4)?" << endl;
//	cin >> s;
//	S.addSurgeryCharges(P1, s);
//	P1.getCharges();
//	cout << endl;
//	cout << "Enter type of Pharmacy(1-4)?" << endl;
//	cin >> m;
//	P.addPharmacyCharges(P1, m);
//
//	cout << "Total Charges : $" << P1.getCharges();
//
//	return 0;
//}
