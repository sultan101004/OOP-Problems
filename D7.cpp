//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Test {
//	int size;
//	int* scores;
//
//	void allocate(int s) {
//		scores = new int[s];
//	}
//	void setValues() {
//		for (int i = 0; i < size; i++) {
//			cin >> scores[i];
//		}
//	}
//public:
//	
//	Test(int a = 0) : size(a) {
//		allocate(size);
//		setValues();
//	}
//	
//	
//
//	double Average() {
//		double sum = 0;
//		for (int i = 0; i < size; i++) {
//			sum += scores[i];
//		}
//		return (sum / size);
//	}
//
//};
//
//int main() {
//
//	Test T1(3);
//	cout << "Avg: " << setw(3) << T1.Average();
//	
//	return 0;
//}