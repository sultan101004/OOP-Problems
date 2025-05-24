//#include<iostream>
//#include<string>
//#include<cstring>
//#include<iomanip>
//
//using namespace std;
//
//struct Product
//{
//	char description[50];   // Product description
//	int partNum;            // Part number
//	double cost;            // Product cost
//};
//
//void display(Product P1) {
//
//	cout << setw(20) << "Product description: " << P1.description << endl;
//	cout <<  "Part number: " << setw(8) << P1.partNum << endl;
//	cout << "Product cost: $ " << setw(8) <<P1.cost << endl;
//	
//}
//
//
//int main() {
//	
//	Product P1;
//	cout << "Enter product description: " << endl;
//	
//	cin.getline(P1.description, 50);
//	cin.ignore(0);
//	//P1.description[strlen(name)] = '\0';
//
//	//cout << "Enter part number (in digits): " << endl;
//	P1.partNum = 220;
//	//cout << "Enter product cost (in digits): " << endl;
//	P1.cost = 2100;
//
//
//	display(P1);
//
//	return 0;
//}