#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//Q2
////(a)
//bool recurseCheck(int* arr, int len) {
//
//	if (len == 0) {
//		return true;
//	}
//
//	if (arr[len] < arr[len - 1]) {
//		return false;
//	}
//
//	return recurseCheck(arr, len-1);
//}
//
//int main() {
//	
//	int arr[] = { 1, 2, 7, 3, 4, 5, 6 };
//	int len = sizeof(arr) / sizeof(int);
//
//	cout << len << endl;
//
//	if (recurseCheck(arr, len-1)) {
//		cout << "True" << endl;
//	}
//	else {
//		cout << "False" << endl;
//	}
//
//
//	return 0;
//}



//(b)
//int Sum(int num) {
//
//	if (num == 0) {
//		return 0;
//	}
//	
//	return num + Sum(num-1);
//}
//
//int main() {
//
//	int num;
//	cout << "Enter num\n";
//	cin >> num;
//
//	cout << "Sum : " << Sum(num);
//
//	return 0;
//}

//(c)

//bool palindromeCheck(char *ptr, int len, int i ) {
//	if (len == i) {
//		return true;
//	}
//
//	if (ptr[i] != ptr[len]) {
//		cout << ptr[len] << " Len = " << len << endl;
//		cout << ptr[i] << " i = " << i << endl;
//		return false;
//	}
//
//	return palindromeCheck(ptr, len-1 , i+1);
//
//}
//int main() {
//
//	char word[50];
//	cout << "Enter a string?\n ";
//	cin.getline(word, 50);
//	
//	int len = strlen(word);
//	len = len;
//	cout << "Len : " << len << endl;
//
//	int i = 0;
//	if (palindromeCheck(word, len-1, i )) {
//		cout << "True\n";
//	}
//	else {
//		cout << "False\n";
//	}
//
//	return 0;
//}

//int Fibbonacci(int num) {
//
//	
//	if (num == 0) {
//		cout << num << " ";
//		return 0;
//	}
//	else if (num == 1) {
//		cout << num << " ";
//		return 1;
//	}
//	int x = 0;
//	x = (Fibbonacci(num - 1) + Fibbonacci(num - 2));
//	//cout << x << " ";
//	return  x;
//}
//
//int main() {
//
//	int num = 0;
//	cout << "Enter num for Fibonacci!\n";
//	cin >> num;
//
//	Fibbonacci(num);
//
//	return 0;
//}
// 
// 
//Problem 3
//int GCD(int num1, int num2) {
//	
//	if (num1 == num2) {
//		return num1;
//	}
//	else if (num1 > num2) {
//		return GCD(num1 - num2, num2);
//	}
//	else {
//		return GCD(num1, num2 - num1);
//	}
//
//}
//
//int main() {
//	int num1 = 0, num2 = 0;
//
//	cout << "Enter 2 numbers?" << endl;
//	cin >> num1 >> num2;
//
//	cout << "LCM : " << num1*num2 / GCD(num1, num2);
//	return 0;
//}


//Q4

bool MagicalSort(char* ptr, int len, bool b1= false, bool b2 = false, bool b3 = false) {
	//if word contains a or m or g return true

	if (len == 0 && (b1 == false || b2 == false || b3 == false)) {
		return false;
	}
	else if (ptr[len] == 'a') {
		b1 = true;
	}
	else if (ptr[len] == 'm') {
		b2 = true;
	}
	else if (ptr[len] == 'g') {
		b3 = true;
	}

	if (b1 && b2 && b3) {
		return true;
	}

	else {
		return MagicalSort(ptr, len-1 , b1, b2, b3);
	}


}
int main() {

	char word[50];
	cout << "Enter word!" << endl;
	cin.getline(word, 50);

	int len = strlen(word);

	if (MagicalSort(word, len-1)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	return 0;
}