#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int n = 0;
	string name;
	int age = 0;
	char grade = 0;

	ofstream file;
	file.open("C:\\Users\\sulta\\OneDrive\\Desktop\\Edu\\Students.txt");

	cout << "How many Students?" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		
		cout << "Enter name of Student : " << i + 1 << endl;
		cin >> name;
		file << name << " ";
		cout << "Enter Age : " << i + 1 << endl;
		cin >> age;
		file << age << " ";
		cout << "Enter Grade? : " << i + 1 << endl;
		cin >> grade;
		file << grade << " ;)" << endl;

	}
	cout << "Program ended!" << endl;
	//file close
	file.close();

	return 0;
}