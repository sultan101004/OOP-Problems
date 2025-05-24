//#include<iostream>
//using namespace std;
//
//class Inventory {
//	int itemNo;
//	int qty;
//	double cost;
//	double totalcost;
//
//public:
//	Inventory(int a = 0, int b = 0, double c = 0, double d = 0.0) : itemNo(a), qty(b), cost(c) {
//		totalcost = cost * qty;
//	}
//
//	void setItem(int a) {
//		if (a >= 0)
//		itemNo = a;
//	}
//	void setQty(int b) {
//		if(b >= 0)
//		qty = b;
//	}
//	void setPrice(double c) {
//		if (c >= 0)
//		cost = c;
//	}
//	void settotal(int a, double cost) {
//		totalcost = a * cost;
//	}
//
//	int getItem()const {
//		return itemNo;
//	}
//	int getQty()const {
//		return qty;
//	}
//	double getPrice()const {
//		return cost;
//	}
//	double getTotal()const {
//		return totalcost;
//	}
//
//
//
//	void display()const {
//		cout << itemNo << "          " << qty << "    " << cost << "    " << totalcost << endl;
//	}
//
//
//};
//
//int main() {
//	int item = 0, qty = 0;
//	double cost = 0, totalcost = 0;
//
//	Inventory* ptr = nullptr;
//	ptr = new Inventory[3];
//
//	cout << "Enter the values:" << endl;
//	for (int i = 0; i < 2; i++) {
//		item++;
//		ptr[i].setItem(item);
//		cout << "Qty?" << endl;
//		cin >> qty;
//		ptr[i].setQty(qty);
//		cout << "Cost?" << endl;
//		cin >> cost;
//		ptr[i].setPrice(cost);
//		ptr[i].settotal(qty, cost);
//	}
//
//	cout << "Item #" << "  Qty  " << "  Cost  " << "  Total " << endl;
//	for (int i = 0; i < 2; i++) {
//		ptr[i].display();
//	}
//
//	delete[] ptr;
//	
//	return 0;
//}