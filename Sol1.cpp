//#include<iostream>
//#include<cstring>
//#include<string>
////#include"solution1.h"
//using namespace std;
//
//
//class MyString {
//
//	char* ptr;
//
//public:
//	MyString() {
//		ptr = new char[1];
//		ptr[0] = '\0';
//	}
//	
//	MyString(const char* s) {
//		ptr = new char[strlen(s) + 1];
//		Custom_strcpy(ptr, s);
//	}
//	
//	MyString(const MyString& s) {
//
//		char* temp = new char[strlen(s.ptr) + 1];
//		Custom_strcpy(temp, s.ptr);
//		delete [] this->ptr;
//		this->ptr = new char[getLength(temp)+1];
//		Custom_strcpy(this->ptr, temp);
//		delete [] temp;
//
//	}
//
//	char* getptr() {
//		return ptr;
//	}
//
//	int getLength(char* ptr) {
//		int count = 0;
//		while (*ptr != '\0') {
//			count++;
//			ptr++;
//		}
//		return count;
//	}
//
//	void Custom_strcpy(char* dest, const char* src) {
//
//
//		while (*src != '\0') {
//			*dest = *src;
//			dest++;
//			src++;
//		}
//		*dest = '\0';
//
//	}
//
//	//destructor
//	~MyString() {
//		delete[] ptr;
//	}
//
//};
//
//int main() {
//	
//	MyString m, n;
//	//m >> cin; //takes input from user
//	//m << cout << endl; //print the ptr value
//	//cout << m.getptr() << endl; //print the ptr value
//	//cout << m.getLength(m.getptr()) << endl; //print the ptr value
//
//	m = "Hammad";
//	n = "Aammad";
//	//cout << *(m.getptr()) << endl;
//	/*((m == n) ? cout << " equal" : cout << "not equal");
//	((m != n) ? cout << " true" : cout << " false");*/
//
//	/*(m > n ? cout << " m is great" : cout << " false");cout<<endl;
//	(m < n ? cout << " n is great" : cout << " false");*/
//
//	//m *= 5;
//	//cout << m.getptr() << endl; //<< cout << endl;
//
//	//n -= n;
//	//m += m;
//
//	//m = m + "*****";
//	////m << cout;
//
//	//m += "-----";
//	//m << cout;
//	//"Sultan" > "yahya" 
//	
//	/*MyString a{"123"}, b;
//	b = a*3;
//	b << cout;*/
//	/*++m;
//	m << cout << endl;
//	n++;
//	n << cout;
//*/
//	/*m = -m;
//	m << cout << endl;
//	cout << endl;
//	MyString result = ++m;
//	result << cout;
//
//*/
//
//	return 0;
//}