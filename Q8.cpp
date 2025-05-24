#include<iostream>
using namespace std;

int main() {
	
	int num = 20;

	if ((num ^ 1) == (num + 1)) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}


	return 0;
}