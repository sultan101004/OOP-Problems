//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//int* createArray(int size) {
//	cout << "Make dynamic memory allocations and intialize " << endl;
//	int* arr = new int[size];
//
//	//intialize the array
//	for (int i = 0; i < size; i++) {
//		//cout << "arr[" << i << "] ?" << endl;
//		arr[i] = 0;
//	}
//	cout << endl;
//	return arr;
//}
//
//void display(int* arr, int size) {
//
//	//display the array
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//}
//
//void deleteArray(int* arr) {
//	
//	delete[] arr;
//}
//
//int main() {
//
//	int* myArray = createArray(10);
//
//	display(myArray, 10);
//
//	deleteArray(myArray);
//
//	myArray = nullptr; //To avoid double free error
//
//	//deleteArray(myArray);
//
//	return 0;
//}