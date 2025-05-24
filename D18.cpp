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
//class CashReg {
//	Inventory inv;
//	double unitprice;
//	double tax;
//	double subtotal;
//	double total;
//
//	void setUnitP() {
//		
//		unitprice = inv.getPrice()* inv.getQty();
//		unitprice += (unitprice * 0.3);
//
//	}
//	void setSub() {
//
//		subtotal =  unitprice;
//
//	}
//	void setTax() {
//
//		tax = (subtotal * 0.06);
//
//	}
//	void setTotal() {
//
//		total = subtotal + tax;
//
//	}
//
//public:
//	CashReg() {
//
//	}
//	CashReg(int item, int qty, double price) : inv(item, qty, price, price) {
//		
//		setUnitP();
//		setSub();
//		setTax();
//		setTotal();
//
//	}
//
//	void setter(int a, int b, double c) {
//		
//		inv.setItem(a);
//		inv.setQty(b);
//		inv.setPrice(c);
//		setUnitP();
//		setSub();
//		setTax();
//		setTotal();
//
//	}
//	double getUnitP() {
//
//		return unitprice;
//	
//	}
//	
//	double getSub() {
//
//		return subtotal;
//	
//	}
//	
//	double getTax() {
//
//		return tax;
//
//	}
//	
//	double getTotal() {
//
//		return total;
//
//	}
//
//	void display()const {
//		cout << "Total : $ " << total << " | Subtotal : $ " << subtotal << " | Tax : $ " << tax << endl;
//	}
//
////	void subtotal(double a, double b,)
//
//};
//
//int main() {
//	int item = 0, qty = 0;
//	double price = 0.0;
//	CashReg* ptr = nullptr;
//	ptr = new CashReg[3];
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Enter for " << i + 1 << endl;
//		cin >> item >> qty >> price;
//		ptr[i].setter(item, qty, price);
//		
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "Item  " << i + 1 << endl;
//		ptr[i].display();
//	}
//
//	delete[] ptr;
//
//	return 0;
//}