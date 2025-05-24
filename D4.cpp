//#include<iostream>
//using namespace std;
//
//class Personal {
//	string name;
//	int age;
//	string address;
//	string phoneNo;
//
//	void setter(const Personal &other ) {
//		name = other.name;
//		age = other.age;
//		address = other.address;
//		phoneNo = other.phoneNo;
//	}
//
//	string getName() {
//		return name;
//	}
//	int getAge() {
//		return age;
//	}
//	string getAddress() {
//		return address;
//	}
//	string getPhone() {
//		return phoneNo;
//	}
//
//public:
//	Personal(string a = "", int b = 0, string c = "", string d = "") : name(a), age(b), address(c), phoneNo(d) {}
//
//	void dispaly()const {
//
//		cout << "Name    : " << name << endl;
//		cout << "Age     : " << age << endl;
//		cout << "Address : " << address << endl;
//		cout << "Phone no: " << phoneNo << endl;
//		cout << endl << endl;
//	}
//};
//int main() {
//
//	Personal Me("Sultan Shah", 22, "St1", "03417705189");
//	Me.dispaly();
//	
//	Personal Friend("Usman Bin Yamin", 21, "St3", "03421312312");
//	Friend.dispaly();
//
//	Personal Abba("HKB", 64, "St1", "03424312434");
//	Abba.dispaly();
//	return 0;
//}