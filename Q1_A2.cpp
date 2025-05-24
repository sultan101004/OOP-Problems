//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//class Sandwich {
//	string* name;
//	string* filling;
//	string* size;
//	bool is_ready;
//	double price;
//
//public:
//	//constructor
//	Sandwich(): is_ready(false), price(0) {
//		name = new string("None");
//		filling = new string("None");
//		size = new string("None");
//	}
//
//	//Sandwich(char* fill, double p): filling(fill), price(p){}
//
//	Sandwich(string n, string f, string s, double p, bool rd) {
//	
//		setSandwich(n, f, s, p);
//		is_ready = rd;
//		//bool is_ready = rd;
//	}
//	
//	Sandwich(const Sandwich& obj){
//		name = new string(*obj.name);
//		filling = new string(*obj.filling);
//		size = new string(*obj.size);
//		price = obj.price;
//		is_ready = obj.is_ready;
//	}
//
//	//setter
//	void setSandwich(string n, string f, string s, double p) {
//		name = new string(n);
//		filling = new string(f);
//		size = new string(s);
//		price = p;
//		is_ready = true;
//	}
//
//	//getter
//	string* getName() {
//		return name;
//	}
//	string* getFilling() {
//		return filling;
//	}
//	string* getSize() {
//		return size;
//	}
//	double getPrice() {
//		return price;
//	}
//
//	void display() {
//		cout << setw(12) << *getName() << " | " << setw(12) << *getFilling() << " | " << setw(12) <<  * getSize() << "|   $" << setw(12) << getPrice() << endl;
//		cout << "Ready: " << (is_ready ? "Yes\n" : "No\n");
//	}
//	
//	//destructor
//	~Sandwich() {
//		delete name;
//		delete filling;
//		delete size;
//	}
//
//
//
//};
//
//int main() {
//
//	/*Sandwich S2;
//	S2.display();*/
//
//	//Sandwich S2("Cheese", "Ham", "Large", 10, true);
//	//S2.display();
//	/*string n, f, s;
//	bool rd = false;
//	double x = 0.0;
//	int count = 0;
//	cout << "How many Burgers would you like? " << endl;
//	cin >> count;
//	Sandwich* S1 = new Sandwich[count];
//
//	for (int i = 0; i < count; i++) {
//	cout << "            Item " << i + 1 << endl << endl;
//		cin.ignore();
//		cout << "Enter name: ";
//		getline(cin, n);
//		cout << "Enter filling: ";
//		getline(cin, f);
//		cout << "Enter size: ";
//		getline(cin, s);
//		cout << "Enter price: ";
//		cin >> x;
//		cout << "Enter ready: ";
//		cin >> rd;
//		S1[i].setSandwich(n, f, s, x);
//		
//	}
//
//	cout << setw(12) <<" Name : " << " | " << setw(12) <<  " Filling : " << " | " << setw(12) << " Size : " << " | " << setw(12) << " Price : " << " | " << setw(12) << " Ready : " << endl;
//	for (int i = 0; i < count; i++) {
//			S1[i].display();
//	}*/
//	/*Sandwich S2(n, f, s, x, rd);
//	S2.display();*/
//	Sandwich S2("Herbs", "Double", "Large", 12.0, true);
//	Sandwich S3 = S2;
//	S3.display();
//	
//	return 0;
//}