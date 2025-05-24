#include<iostream>
using namespace std;


void Print1(int num) {
	if (num == 0) {
		return;
	}
	cout << " * ";
	// 	Print2(num);

	return Print1(num - 1);
}

void PrintA(int num) {
	if (num == 0) {
		return;
	}

	Print1(num);
	cout << endl;
	return PrintA(num - 1);
}

void Print2(int i, int num) {

	if (i < 0) {
		return;
	}

	cout << " * ";

	return Print2(i - 1, num);

}

void PrintB(int num, int i = 0) {

	if (num == i) {
		return;
	}
	Print2(i, num);
	cout << endl;

	return PrintB(num, i + 1);
}

void PrintC(int num) {

	PrintA(num);
	PrintB(num);

}

int getCharCount(const char* ptr, char c, int count = 0) {
	//cout << "Hey" << endl;

	if (*ptr == '\0') {
		return count;
	}

	if (*ptr == c) {
		count++;
	}
	ptr++;
	getCharCount(ptr, c, count);


	/*while (*ptr != '\0') {
		cout << *ptr << endl;
		ptr++;
	}*/
}


int main() {
	const char* ptr = "wavelength";
	char c = 'e';
	int choice;
	cout << "Enter choices (1-4) for Question 1-4 and 0 to exit. " << endl;
	cin >> choice;
	while (choice != 0) {

		switch (choice) {
		case 1:
			//Question 1
			PrintA(5);

			break;

		case 2:
			//Question 2
			PrintB(6);
			break;
		case 3:
			//Question 3
			PrintC(5);
			break;
		case 4:
			//Question 4
			
			cout << "Char is rep : " << getCharCount(ptr, c) << " times.";
			break;
		default:
			cout << "Invalid Output" << endl;
		}
		cout << endl << endl;
		cout << "Enter again(1-4)? or Exit (0)" << endl;
		cin >> choice;
	}

	return 0;
}