#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//int** create2DArray(int rows, int cols) {
//	int** array = new int* [rows]; // Allocate memory for the row pointers
//	for (int i = 0; i < rows; i++) {
//		array[i] = new int[cols]; // Allocate memory for each row
//	}
//	return array; // Return the pointer to the 2D array
//}
//void display(int** ptr, int &x, int &y) {
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			cout << ptr[i][j] << " ";
//		}cout << endl;
//	}
//	cout << endl << endl;
//}
//
//int ** transpose(int** ptr, int x, int y) {
//
//	int** ptr2 = create2DArray(x, y);
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			ptr2[j][i] = ptr[i][j]; 
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		delete[] ptr[i];
//		ptr[i] = ptr2[i];
//	}
//	delete[] ptr;
//	cout << "Transpose" << endl;
//	return ptr2;
//}
//
//int main() {
//	int x = 4, y = 4;
//	srand(time(0)); //seeding time to 0 
//
//	int** ptr = create2DArray(x, y);
//
//	for (int i = 0; i < 4; i++) { //inserting random values to the array
//		for (int j = 0; j < 4; j++) {
//			ptr[i][j] =  10 + rand() % 90;
//		}
//	}
//
//	display(ptr, x, y);
//
//	ptr = transpose(ptr, x, y);
//
//	display(ptr, x, y);
//
//	for (int i = 0; i < 4; i++) {
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//	return 0;
//}

//int main() {
//
//	int* a = new int(9);
//	double* b = reinterpret_cast<double*>(a);
//	cout << *b << endl;
//
//	delete a;
//	return 0;
//}