//#include<iostream>
//using namespace std;
//
//class Temp {
//	
//	int temp;
//
//	void setTemp(int a) {
//		temp = a;
//	}
//public:
//	Temp(int a = 0) : temp(a) {}
//	
//	int getTemp()const  {
//		return temp;
//	}
//	
//
//	bool waterBoiling()const {
//		
//		//cout << "Boiling: ";
//		if (temp > 212) {
//				cout << "Water Boiling" << endl;
//				return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	bool waterFreezing()const {
//
////		cout << "Freezing: ";
//		if (temp < 32) {
//			cout << "Water Freezing" << endl;
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	bool oxygenBoiling()const {
//
//		
//		if (temp > -306) {
//			cout << "Oxygen Boiling" << endl;
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	bool oxygenFreezing()const {
//
//		//cout << "Boiling: ";
//		if (temp < -362) {
//			cout << "Oxygen Freezing" << endl;
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	bool alcoholBoiling()const {
//
//		///cout << "Boiling: ";
//		if (temp > 172) {
//			cout << "Alcohol Boiling" << endl;
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	bool alcoholFreezing()const {
//
////		cout << "Boiling: ";
//		if (temp < -173) {
//			cout << "Alcohol Feezing" << endl;
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//
//};
//
//int main() {
//
//	Temp T1(220);
//	T1.waterBoiling();
//	T1.oxygenBoiling();
//	T1.alcoholBoiling();
//	T1.waterFreezing();
//	T1.oxygenFreezing();
//	T1.alcoholFreezing();
//
//	return 0;
//}
//
