#pragma once
#include<fstream>
//#include"Q1.h"

using namespace std;

void sort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void disp(ofstream& out, int* arr, int size) {
	for (int i = 0; i < size; i++) {
		out << arr[i] << " ";
	}
}

void display(const int* arr, const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
