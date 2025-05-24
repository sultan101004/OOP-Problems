//#include<iostream>
//using namespace std;
//
//class Office {
//	static double totalBudget;
//	double officeBudget;
//
//public:
//	Office() {};
//	static void mainOfficeBudget(double);
//	double getTotalBudget() {
//		return totalBudget;
//	}
//	void addBudget() {
//		cin >> officeBudget;
//		totalBudget += officeBudget;
//	}
//	double getBudget() {
//		return officeBudget;
//	}
//};
//
//void Office::mainOfficeBudget(double moffice) {
//	totalBudget += moffice;
//}
//double Office::totalBudget = 0;
//
//int main() {
//	
//	double mf = 0, bg = 0;
//	const int Instances = 4;
//	cout << "Enter main Office Budget? " << endl;
//	cin >> mf;
//	Office::mainOfficeBudget(mf);
//
//	Office Budgets[Instances];
//	for (int i = 0; i < Instances; i++) {
//		
//		cout << "Enter Budget for Office : " << i + 1 << endl;
//		Budgets[i].addBudget();
//
//	}
//
//	cout << "Showing Budgets!" << endl;
//	for (int i = 0; i < Instances; i++) {
//		cout << "Budget for Office : " << i + 1 << " $" << Budgets[i].getBudget() << endl;
//	}
//	cout << endl;
//	cout << "Final Budget:  $" << Budgets[0].getTotalBudget();
//	//Budgets[0].mainOfficeBudget(33);
//
//
//	return 0;
//}