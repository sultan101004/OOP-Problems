#pragma once
#include<iostream>
#include<string>
using namespace std;

class MyString {

	char* ptr;

public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);

	void operator=(const MyString&);
	void operator=(const char*);
	int getLength(const char*);
	char* getPtr();
	void Custom_strcpy(char*, const char*);

	//operator overloading
	bool operator==(const MyString&);
	bool operator!=(const MyString&);
	friend ostream& operator<<(ostream&, const MyString&);
	friend istream& operator>>(istream&, MyString&);
	MyString& operator*=(int n);
	MyString& operator*(int n);
	MyString& operator+=(const MyString&);
	MyString& operator++();
	MyString& operator--();
	MyString& operator+(const char*);
	//MyString& operator++();
	//MyString& operator++(int);
	//MyString& operator-=();
	//MyString& operator-();
	////MyString& operator-();



	//destructor
	~MyString() {
		delete[] ptr;
	}

};

MyString::MyString() {
	cout << " calling default constructor" << endl;
	ptr = new char[1];
	ptr[0] = '\0';
}
MyString::MyString(const char* source) {
	cout << "calling const char constructor" << endl;
	int len = strlen(source);
	this->ptr = new char[len + 1];
	Custom_strcpy(this->ptr, source);
}
MyString::MyString(const MyString& source) {
	cout << "Calling copy constructor" << endl;
	int len = strlen(source.ptr);
	this->ptr = new char[len + 1];
	Custom_strcpy(this->ptr, source.ptr);
}

void MyString::operator=(const MyString& source) {
	cout << "Calling = operator" << endl;
	int len = strlen(source.ptr);
	delete[] ptr;
	this->ptr = new char[len + 1];
	Custom_strcpy(this->ptr, source.ptr);
}

void MyString::operator=(const char* source) {
	cout << "Calling = operator" << endl;
	int len = strlen(source);
	delete[] ptr;
	this->ptr = new char[len + 1];
	Custom_strcpy(this->ptr, source);
}

int MyString::getLength(const char* s) {
	cout << "Calling getLength" << endl;
	int len = 0;
	while (*s != '\0') {
		len++;
		s++;
	}
	return len;
}

char* MyString::getPtr() {
	cout << "Calling getPtr" << endl;
	return ptr;
}

void MyString::Custom_strcpy(char* dest, const char* src) {

	cout << "calling custom_strcpy" << endl;
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

}

//operator overloading
bool MyString::operator==(const MyString& s) {
	cout << "Calling == operator" << endl;
	return strcmp(ptr, s.ptr) == 0;
}

bool MyString::operator!=(const MyString& s) {
	cout << "Calling != operator" << endl;
	return (strcmp(ptr, s.ptr) != 0);
}

ostream& operator<<(ostream& os, MyString& s) {

	cout << "Calling << operator" << endl;
	os << s.getPtr() << endl;
	return os;
}

istream& operator>>(istream& in, MyString& s) {
	cout << "Calling >> operator" << endl;
	char temp[10000];

	in >> temp;
	int len = strlen(temp);
	delete[] s.ptr;
	s.ptr = new char[len + 1];
	s.Custom_strcpy(s.ptr, temp);

	return in;
}

MyString& MyString::operator*=(int n) {

	cout << "Calling *= operator" << endl;
	int len = strlen(ptr);
	char* buff = new char[n * len + 1];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];

	int i = 0;
	while (n--) {
		for (int j = 0; j < len; j++) {
			buff[i] = ptr[j];
			i++;
		}
	}
	buff[i] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}


MyString& MyString::operator*(int n) {

	cout << "Calling *= operator" << endl;
	int len = strlen(this->ptr);
	char* buff = new char[n * len + 1];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];

	int i = 0;
	while (n--) {
		for (int j = 0; j < len; j++) {
			buff[i] = this->ptr[j];
			i++;
		}
	}
	buff[i] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}

MyString& MyString::operator+=(const MyString& source) {

	cout << "Calling += operator" << endl;
	int len = strlen(this->ptr) + strlen(source.ptr);
	char* buff = new char[len];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];

	int i = 0;

	for (int j = 0; j < strlen(this->ptr); j++) {
		buff[i] = this->ptr[j];
		i++;
	}
	for (int j = 0; j < strlen(source.ptr); j++) {
		buff[i] = source.ptr[j];
		i++;
	}

	buff[i] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}

MyString& MyString::operator+(const char* source) {

	cout << "Calling + for char const operator" << endl;
	int len = strlen(this->ptr) + strlen(source);
	char* buff = new char[len];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];

	int i = 0;

	for (int j = 0; j < strlen(this->ptr); j++) {
		buff[i] = this->ptr[j];
		i++;
	}
	for (int j = 0; j < strlen(source); j++) {
		buff[i] = source[j];
		i++;
	}

	buff[i] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}


MyString& MyString::operator--() {

	cout << "Calling += operator" << endl;
	int len = strlen(this->ptr);
	char* buff = new char[len + 1];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];


	for (int j = 0; j < strlen(this->ptr); j++) {
		buff[j] = tolower(this->ptr[j]);

	}

	buff[len] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}

MyString& MyString::operator++() {

	cout << "Calling += operator" << endl;
	int len = strlen(this->ptr);
	char* buff = new char[len + 1];
	//delete[] ptr;
	//this->ptr = new char[n* len  +1];


	for (int j = 0; j < strlen(this->ptr); j++) {
		buff[j] = toupper(this->ptr[j]);

	}

	buff[len] = '\0';

	//	cout << buff << endl;
	delete[] this->ptr;
	this->ptr = new char[strlen(buff) + 1];
	Custom_strcpy(this->ptr, buff);
	//Custom_strcpy(this->ptr, ptr);
	return *this;
}