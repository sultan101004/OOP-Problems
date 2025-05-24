//#include<iostream>
//using namespace std;
//
//int g_one = 1;
//
//void func1(int* ptr) {
//	ptr = &g_one;
//}
//
//void func2(int* &ptr) {
//	ptr = &g_one;
//}
//int main() {
//
//	int num = 2;
//	int *ptr = &num;
//
//	func1(ptr);
//	cout << *ptr << endl;
//	func2(ptr);
//	cout << *ptr << endl;
//
//	return 0;
//}