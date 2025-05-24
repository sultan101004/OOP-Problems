//#include<iostream>
//#include<string>
//using namespace std;
//
//class School {
//	int students;
//	string *name;
//
//public:
//	School(int stds) {
//		name = new string[students];
//	}
//	void setname() {
//		for (int i = 0; i < students; i++) {
//			getline(cin, name[i]);
//		}
//	}
//	void getname() {
//		for (int i = 0; i < students; i++) {
//			cout << name[i] << " ";
//		}
//	}
//	~School() {
//		cout << "Destructor called" << endl;
//		delete[] name;
//	}
//};
//
//int main() {
//
//	School S1(5);
//	
//	S1.setname();
//	S1.getname();
//
//	return 0;
//}