//#include<iostream>
//using namespace std;
//
//class Date {
//	int day;
//	int month;
//	int year;
//
//public:
//	Date(int a = 0, int b = 0, int c = 0): day(a), month(b), year(c) {}
//
//	
//	void setDay(int a){
//		while (a < 1 || a > 31) {
//			cout << "Invalid Input, type again! " << endl;
//			cin >> a;
//		}
//		day = a;
//		}
//	void setMonth(int a){
//		while (a < 1 || a > 12) {
//			cout << "Invalid Input, type again! " << endl;
//			cin >> a;
//		}
//		month = a;
//		}
//	void setYear(int a) {
//		while (a < 2000 || a > 3000) {
//			cout << "Invalid Input, type again! " << endl;
//			cin >> a;
//		}
//		year = a;
//	}
//	
//	int getDay()const  {
//		
//		return day;
//	}
//
//	int getMonth()const {
//		
//		return month;
//	}
//	int getYear() const{
//		
//		return year;
//	}
//
//	void d1()const  {
//		cout << day << "/ " << month << "/ " << year << endl;
//	}
//	void d2()const {
//
//		string a = "";
//		switch (month) {
//
//		case 1:
//			a = "January";
//			break;
//		case 2:
//			a = "February";
//			break;
//		case 3:
//			a = "March";
//			break;
//		case 4:
//			a = "April";
//			break;
//		case 5:
//			a = "May";
//			break;
//		case 6:
//			a = "June";
//			break;
//		case 7:
//			a = "July";
//			break;
//		case 8:
//			a = "August";
//			break;
//		case 9:
//			a = "September";
//			break;
//		case 10:
//			a = "October";
//			break;
//		case 11:
//			a = "November";
//			break;
//		case 12:
//			a = "December";
//			break;
//		}
//
//		cout << a << " " << day << ", " << year << endl;
//	}
//	void d3()const {
//		string a = "";
//
//		switch (month) {
//
//		case 1:
//			a = "January";
//			break;
//		case 2:
//			a = "February";
//			break;
//		case 3:
//			a = "March";
//			break;
//		case 4:
//			a = "April";
//			break;
//		case 5:
//			a = "May";
//			break;
//		case 6:
//			a = "June";
//			break;
//		case 7:
//			a = "July";
//			break;
//		case 8:
//			a = "August";
//			break;
//		case 9:
//			a = "September";
//			break;
//		case 10:
//			a = "October";
//			break;
//		case 11:
//			a = "November";
//			break;
//		case 12:
//			a = "December";
//			break;
//		}
//		cout << day << ", " << a << ", " << year << endl;
//	
//	}
//};
//
//int main() {
//
//	Date D(2, 4, 2006);
//	D.d1();
//	cout << endl;
//	D.d2();
//	cout << endl;
//	D.d3();
//	return 0;
//}