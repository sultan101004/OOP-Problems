#pragma once
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class MyString {

	char* ptr;
	//friend ostream& operator<<(ostream& out, const MyString& obj);
	//friend istream& operator>>(istream& in, MyString& obj);

public:
	//constructors
	MyString() {
		ptr = new char[1];
		*ptr = '\0';
	}
	MyString(const char* str) {
		ptr = new char[getLength(str) + 1];
		Custom_strcpy(ptr, str);
	}

	MyString(const MyString& obj) {
		ptr = new char[getLength(obj.ptr) + 1];
		Custom_strcpy(ptr, obj.ptr);
	}


	//Other functions
	MyString& operator=(const MyString& obj) {

		if (this != &obj) {
			delete[] ptr;
			ptr = new char[getLength(obj.ptr) + 1];
			Custom_strcpy(ptr, obj.ptr);
		}
		return *this;
	}

	MyString& operator=(const char* pointer) {
		if (ptr != pointer) {  // Check for self-assignment
			delete[] ptr;  // Free existing memory

			// Allocate new memory and copy the string
			ptr = new char[strlen(pointer) + 1];
			Custom_strcpy(ptr, pointer);
		}
		return *this;
	}

	int getLength(const char* ptr) {
		int i = 0;
		while (*ptr != '\0') {
			i++;
			ptr++;
		}
		return i;
	}

	char* getptr() {
		return ptr;
	}

	void Custom_strcpy(char* dest, const char* src) {


		while (*src != '\0') {
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';

	}


	//operator overloading
	char& operator[](int index) {
		return ptr[index];
	}

	ostream& operator<<(ostream& out) {

		out << ptr;

		return out;
	}

	istream& operator>>(istream& in) {
		ptr = new char[100];
		//char *str = 
		in >> ptr;

		return in;
	}

	bool operator==(const MyString& obj) {
		//while(*ptr == *obj.ptr) {
		if (compare(ptr, obj.ptr)) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator!=(const MyString& obj) {
		//while(*ptr == *obj.ptr) {
		if (compare(ptr, obj.ptr)) {
			return false;
		}
		else {
			return true;
		}
	}

	bool compare(const char* str1, const char* str2) {

		if (strcmp(str1, str2) == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator>(const MyString& obj) const {
		const char* p1 = ptr;     // Pointer to current object's string
		const char* p2 = obj.ptr; // Pointer to the other object's string

		// Compare each character of both strings
		while (*p1 != '\0' && *p2 != '\0') {
			if (*p1 > *p2) {
				return true;  // Current string is greater
			}
			else if (*p1 < *p2) {
				return false; // Current string is less
			}
			// Move to the next character in both strings
			p1++;
			p2++;
		}

		// If all characters are equal up to the end of one string,
		// the longer string is considered greater
		return (*p1 != '\0' && *p2 == '\0'); // true if *this is longer
	}


	bool operator<(const MyString& obj) const {
		const char* p1 = ptr;     // Pointer to current object's string
		const char* p2 = obj.ptr; // Pointer to the other object's string

		// Compare each character of both strings
		while (*p1 != '\0' && *p2 != '\0') {
			if (*p1 < *p2) {
				return true;  // Current string is greater
			}
			else if (*p1 > *p2) {
				return false; // Current string is less
			}
			// Move to the next character in both strings
			p1++;
			p2++;
		}

		// If all characters are equal up to the end of one string,
		// the longer string is considered greater
		return (*p1 == '\0' && *p2 != '\0'); // true if *this is longer
	}
	//return (*p1 == '\0' && *p2 != '\0'); // true if current string is shorter


	MyString& operator*=(int n) {
		int originalLength = getLength(this->ptr);         // Length of the original string
		int newLength = originalLength * n;                // Length of the new string after repetition
		char* buff = new char[newLength + 1];              // Allocate new buffer with space for null terminator

		// Copy `ptr` into `buff`, `n` times
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < originalLength; j++) {
				buff[i * originalLength + j] = this->ptr[j];
			}
		}

		buff[newLength] = '\0'; // Null-terminate the new string

		// Delete old `ptr` and assign the new buffer
		delete[] this->ptr;
		this->ptr = buff;

		return *this;
	}

	MyString& operator*(int n) {
		int originalLength = getLength(this->ptr);         // Length of the original string
		int newLength = originalLength * n;                // Length of the new string after repetition
		char* buff = new char[newLength + 1];              // Allocate new buffer with space for null terminator

		// Copy `ptr` into `buff`, `n` times
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < originalLength; j++) {
				buff[i * originalLength + j] = this->ptr[j];
			}
		}

		buff[newLength] = '\0'; // Null-terminate the new string

		// Delete old `ptr` and assign the new buffer
		delete[] this->ptr;
		this->ptr = buff;

		return *this;
	}


	//	MyString& operator*(int n) {
	//	int originalLength = getLength(this->ptr);         // Length of the original string
	//	int newLength = originalLength * n;                // Length of the new string after repetition
	//	char* buff = new char[newLength + 1];              // Allocate new buffer with space for null terminator

	//	// Copy `ptr` into `buff`, `n` times
	//	int i = 0;
	//	while (i < newLength) {

	//		for (int l = 0; l < n; l++) {
	//			for (size_t j = 0; j < originalLength; j++)
	//			{
	//				buff[i] = this->ptr[j];
	//				i++;
	//			}
	//		}
	//	}

	//	buff[newLength] = '\0'; // Null-terminate the new string

	//	// Delete old `ptr` and assign the new buffer
	//	delete[] this->ptr;
	//	this->ptr = buff;

	//	return *this;
	//}
	//


	MyString& operator-=(MyString& source) {

		cout << "inoperator" << endl;
		int originalLength = getLength(source.ptr);         // Length of the original string
		//int newLength = originalLength - ;                // Length of the new string after repetition
		char* buff = new char[originalLength + 1];              // Allocate new buffer with space for null terminator

		// Copy `ptr` into `buff`, `n` times
		for (int i = 0; i < (originalLength); i++) {
			buff[i] = tolower(this->ptr[i]);
		}
		buff[originalLength] = '\0'; // Null-terminate the new string
		cout << buff;
		delete[] this->ptr;
		source.ptr = buff;

		return *this;
	}

	MyString& operator-() {

		//cout << "inoperator" << endl;
		int len = getLength(this->ptr);         // Length of the original string
		//int newLength = originalLength - ;                // Length of the new string after repetition
		char* buff = new char[len + 1];              // Allocate new buffer with space for null terminator

		// Copy `ptr` into `buff`, `n` times
		for (int i = 0; i < len; i++) {
			buff[i] = tolower(this->ptr[i]);
		}
		buff[len] = '\0'; // Null-terminate the new string
		//cout << buff;
		delete[] this->ptr;
		this->ptr = buff;

		return *this;
	}


	MyString& operator+=(MyString& source) {

		cout << "inoperator" << endl;
		int originalLength = getLength(source.ptr);         // Length of the original string
		//int newLength = originalLength - ;                // Length of the new string after repetition
		char* buff = new char[originalLength + 1];              // Allocate new buffer with space for null terminator

		// Copy `ptr` into `buff`, `n` times
		for (int i = 0; i < (originalLength); i++) {
			buff[i] = toupper(this->ptr[i]);
		}
		buff[originalLength] = '\0'; // Null-terminate the new string
		cout << buff;
		delete[] this->ptr;
		source.ptr = buff;

		return *this;
	}

	MyString& operator+(const char* source) {
		int newLength = getLength(this->ptr) + getLength(source);
		char* buff = new char[newLength + 1];

		for (int i = 0; i < getLength(this->ptr); i++) {
			buff[i] = this->ptr[i];
		}
		for (int i = 0; i < getLength(source); i++) {
			buff[i + getLength(this->ptr)] = source[i];
		}
		buff[newLength] = '\0';
		delete[] this->ptr;
		this->ptr = buff;
		return *this;
	}

	MyString& operator+=(const char* source) {
		int newLength = getLength(this->ptr) + getLength(source);
		char* buff = new char[newLength + 1];

		for (int i = 0; i < getLength(this->ptr); i++) {
			buff[i] = this->ptr[i];
		}
		for (int i = 0; i < getLength(source); i++) {
			buff[i + getLength(this->ptr)] = source[i];
		}
		buff[newLength] = '\0';
		delete[] this->ptr;
		this->ptr = buff;
		return *this;
	}

	//MyString & operator++() {

	//	int len = getLength(this->ptr);
	//	char* buff = new char[len + 1];

	//	for (int i = 0; i < len; i++) {
	//		buff[i] = toupper(this->ptr[i]);
	//	}
	//	
	//	buff[len] = '\0';
	//	delete[] this->ptr;
	//	this->ptr = buff;
	//	//return a.ptr;
	//	return *this;
	//}

	MyString& operator++() {
		int len = getLength(this->ptr);
		char* buff = new char[len + 1];

		for (int i = 0; i < len; i++) {
			buff[i] = toupper(this->ptr[i]);
		}

		buff[len] = '\0';
		delete[] this->ptr;
		this->ptr = buff;

		return *this; // Return the modified object
	}
	MyString& operator++(int a) {
		int len = getLength(this->ptr);

		//		char* temp = new char[len +1];
		char* buff = new char[len + 1];

		for (int i = 0; i < len; i++) {
			buff[i] = toupper(this->ptr[i]);
		}

		buff[len] = '\0';
		delete[] this->ptr;
		this->ptr = buff;

		return *this; // Return the modified object
	}
	//destructor
	~MyString() {
		delete[] ptr;
	}

};