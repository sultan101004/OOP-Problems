//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student {
//	string name;
//	int age;
//	double gpa;
//};
//
//struct Course {
//	string course;
//	int no_st;
//	Student* s;
//
//
//
//	~Course() {
//		delete[] this->s;
//	}
//};
//
//void insert(Course& c) {
//	for (int i = 0; i < c.no_st; i++) {
//		cout << "Student : " << i + 1 << endl;
//
//		cout << "Name ?" << endl;
//		
//		cin.ignore();
//		getline(cin, c.s[i].name);
//		
//
//		cout << "Age ?" << endl;
//		cin >> c.s[i].age;
//		
//		//cin.ignore();
//		cout << "gpa ?" << endl;
//		cin >> c.s[i].gpa;
//	}
//}
//
//void average(Course& c) {
//	double sum = 0;
//	cout << "n0: " << c.no_st << endl;
//	for (int i = 0; i < c.no_st; i++) {
//		cout << c.s[i].gpa << endl;
//		sum += c.s[i].gpa;
//	}
//	sum /= c.no_st;
//	cout << "Avg gpa: " << sum << endl;
//}
//int main() {
//	Course c;
//	
//	cout << "Enter Course name?  " << endl;
//	getline(cin, c.course);
//	
//	cout << "No of Students? " << endl;
//	cin >> c.no_st;
//	c.s = new Student[c.no_st];
//
//	insert(c);
//
//	average(c);
//
//	return 0;
//}