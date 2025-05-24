#include<iostream>
using namespace std;

struct Address {
	string city;
	string country;
};
struct ContactInfo {
	string name;
	int phoneNo;
	Address Adr;
};
int main() {

	ContactInfo C1[10];
	for (int i = 0; i < 10; i++) {
		cout << "User :     " << i + 1 << endl;
		cout << "Enter name? " << endl;
		cin >> C1[i].name;
		cout << "Enter Phone no: " << endl;
		cin >> C1[i].phoneNo;
		cout << "Enter Address : " << endl;
		cin >> C1[i].Adr.city;
		cout << "Enter Country:  " << endl;
		cin >> C1[i].Adr.country;
	}
	cout << " Name:               | " << " Phone no:             | " << " City :            | " << " Country :            " << endl;
	for (int i = 0; i < 10; i++) {
		cout << C1[i].name << " , " << C1[i].phoneNo << " , " << C1[i].Adr.city << " , " << C1[i].Adr.country << endl;
	}

	return 0;
}