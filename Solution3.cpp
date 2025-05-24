//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//void Custom_strcpy(char* dest, const char* src) {
//
//	cout << "calling custom_strcpy" << endl;
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//
//}
//
//void strconcatination(char* dest, const char* src) {
//
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//
//}
//class MyString {
//
//	char* ptr;
//
//public:
//	MyString() {
//		ptr = new char[1];
//		ptr[0] = '\0';
//	}
//	MyString(const char* s) {
//
//		int len = strlen(s);
//		ptr = new char[len + 1];
//		Custom_strcpy(ptr, s);
//		ptr[len] = '\0';
//	}
//	MyString(const MyString& s) {
//
//		int len = strlen(s.ptr);
//		ptr = new char[len + 1];
//		Custom_strcpy(ptr, s.ptr);
//	}
//
//	void setPtr(const char* s) {
//		int len = strlen(s);
//		ptr = new char[len + 1];
//		Custom_strcpy(ptr, s);
//	}
//	char* getPtr() const { return ptr; }
//
//	MyString& operator=(const MyString& source) {
//
//		if (this != &source) {
//			delete[] ptr;
//			int len = strlen(source.ptr);
//			ptr = new char[len + 1];
//			Custom_strcpy(ptr, source.ptr);
//		}
//		return *this;
//	}
//
//	friend ostream& operator<<(ostream& out, const MyString& obj);
//	friend istream& operator>>(istream& in, MyString& obj);
//	//friend MyString& operator=(MyString&, MyString&);
//	//friend MyString& operator=(MyString&, const char*);
//	friend MyString operator+(MyString&, MyString&);
//	friend MyString operator+(MyString&, const char*);
//	friend MyString& operator+=(MyString&, MyString&);
//	friend MyString& operator+=(MyString&, const char *);
//	friend MyString operator*(MyString&, int);
//	friend MyString operator*= (MyString&, int);
//	friend MyString& operator++(MyString&);
//	friend MyString operator++(MyString&, int);
//	friend MyString operator-(MyString&);
//	friend bool operator==(const MyString&, const MyString&);
//	friend bool operator!=(const MyString&, const MyString&);
//	friend bool operator<(const MyString&, const MyString&);
//	friend bool operator>(const MyString&, const MyString&);
//
//	~MyString() {
//
//		delete[] ptr;
//	}
//};
//
//bool operator==(const MyString& lhs, const MyString& rhs) {
//	if (strcmp(lhs.ptr, rhs.ptr) == 0) {
//		return true;
//	}
//	return false;
//}
//
//bool operator!=(const MyString& lhs, const MyString& rhs) {
//	return !(lhs == rhs);
//}
//
//bool operator<(const MyString& lhs, const MyString& rhs) {
//	return strcmp(lhs.ptr, rhs.ptr) < 0;
//}
//
//bool operator>(const MyString& lhs, const MyString& rhs) {
//	return !(lhs < rhs);
//}
//
//MyString operator-( MyString& source) {
//
//	char* buff = new char[strlen(source.ptr) + 1];
//	//Custom_strcpy(buff, source.ptr);
//
//	for (int i = 0; i < strlen(buff); i++) {
//		buff[i] = tolower(source.ptr[i]);
//	}
//
//	MyString temp(buff);
//	delete[] buff;
//	return temp;
//}
//
//MyString operator+( MyString& lhs, MyString& rhs) {
//
//	char* buff = new char[strlen(lhs.ptr) + strlen(rhs.ptr) + 1];
//	
//	for(int i=0; i < strlen(lhs.ptr); i++){
//		buff[i] = lhs.ptr[i];
//	}
//	for(int i=0; i < strlen(rhs.ptr); i++){
//		buff[i+strlen(lhs.ptr)] = rhs.ptr[i];
//	}
//	buff[strlen(lhs.ptr) + strlen(rhs.ptr)] = '\0';
//	
//	MyString temp(buff);
//	delete[] buff;
//	return temp;
//}
//
//MyString& operator+=(MyString& lhs, MyString& rhs) {
//
//	lhs = lhs + rhs;
//
//	return lhs;
//}
//
//MyString operator*( MyString& source, int n) {
//	char* buff = new char[strlen(source.ptr) * n + 1];
//	Custom_strcpy(buff, source.ptr);
//	for (int i = 1; i < n; i++) {
//		strconcatination(buff, source.ptr);
//	}
//	delete[]source.ptr;
//	source.ptr = new char[strlen(buff) + 1];
//	Custom_strcpy(source.ptr, buff);
//	//MyString temp(buff);
//	delete[] buff;
//	return source;
//}
//
//MyString operator*= (MyString& lhs, int n) {
//
//	lhs = lhs * n;
//	return lhs;
//}
//
//
//
//ostream& operator<<(ostream& out, const MyString& obj) {
//
//	out << obj.ptr;
//	return out;
//}
//
//istream& operator>>(istream& in, MyString& obj) {
//	char temp[1000];
//	in >> temp;
//	obj.setPtr(temp);
//
//	return in;
//}
//
//
//MyString operator+(MyString& lhs, const char* rhs) {
//	
//	int newLength = strlen(lhs.ptr) + strlen(rhs);
//	char* buff = new char[newLength + 1]; // +1 for the null terminator
//
//	Custom_strcpy(buff, lhs.ptr);
//	strconcatination(buff, rhs);
//	MyString temp(buff);
//	delete[] buff;
//
//	return temp;
//}
//
//MyString& operator+=(MyString& lhs, const char* rhs) {
//
//	lhs = lhs + rhs;
//	return lhs;
//}
//
////pre-increment
//MyString &operator++(MyString& source) {
//	
//	for (int i = 0; i < strlen(source.ptr); i++) {
//		source.ptr[i] = toupper(source.ptr[i]); 
//	}
//
//	source.ptr[strlen(source.ptr)] = '\0';
//	return source;
//}
//
////post-increment
//MyString operator++(MyString& source, int n) {
//
//	int len = strlen(source.ptr);
//	char *buff = new char[len + 1];
//	Custom_strcpy(buff, source.ptr);
//
//	for (int i = 0; i < strlen(source.getPtr()); i++) {
//		source.ptr[i] = toupper(source.ptr[i]);
//	}
//	
//	source.ptr[strlen(source.ptr)] = '\0';
//	MyString temp(buff);
//	delete[]buff;
//	
//	return temp;
//}
//
//
//
//int main() {
//	MyString m1("hello");
//	cout << m1 << endl;
//	
//	MyString m2(m1);
//	cout << m2 << endl;
//
//	MyString m3 = m1 + m2;
//	cout << m3 << endl;
//
//	MyString m4 = m1 * 3;
//	cout << m4 << endl;
//
//	MyString m5 = m1++;
//	cout << m5 << endl;
//	cout << m1 << endl;
//
//	MyString m6 = ++m1;
//	cout << m6 << endl;
//
//	MyString m7 = -m1;
//	cout << m7 << endl;
//	cout << m1 << endl;
//
//
//	MyString m8 = "mello";
//	cout << m8 << endl;
//	m8 += " world";
//	cout << m8 << endl;
//
//	m8 * 8;
//	cout << m8 << endl;
//
//	return 0;
//}
