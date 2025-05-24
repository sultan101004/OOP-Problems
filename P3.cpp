#include<iostream>
using namespace std;

int* sort(int* arr, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {

			}
		}
	}
}

int main() {

	bool flag = 0;
	int arr[] = { 1,3,6,5,2,4, };
	


	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}