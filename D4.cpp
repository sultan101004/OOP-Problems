//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//class Name {
//	char* str;
//
//public:
//	Name() :str(nullptr) {
//		str = new char[1];
//		*str = '\0';
//	}
//	Name(const char* stri) :str(nullptr) {
//
//		if (stri == nullptr || stri[0] == '\0') {
//			str = new char[1];
//			str[0] = '\0';
//		}
//		else {
//			str = new char[sizeof(stri) + 1];
//			strncpy(str, stri, strlen(stri));
//		}
//
//	}
//	Name(const Name& other) {
//		str = other.str;
//	}
//
//	void display()const {
//		cout << "Name is : " << str << endl;
//	}
//
//
//};
//
//int main() {
//
//	Name empty;
//	empty.display();
//	Name Larry("Larry");
//	Larry.display();
//	Name Ahmed(Larry);
//	Ahmed.display();
//
//
//	return 0;
//}