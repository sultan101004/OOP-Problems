//#include<iostream>
//using namespace std;
//
//class number {
//	double* ptr;
//	int size;
//
//	double * allocate() {
//		ptr = new double[size];
//		return ptr;
//	}
//
//public:
//
//	number(double s = 0):size(s) {
//		allocate();
//	}
//	void setvalues() {
//		cout << "setting the nos" << endl;
//		for (int i = 0; i < size; i++) {
//			cin >> ptr[i];
//		}
//	}
//
//	bool findNo(double a) {
//		for (int i = 0; i < size; i++) {
//			if (a == ptr[i]) {
//				cout << "Number Found  on pos: " << i+1 << endl;
//
//				return true;
//			}
//		}
//		cout << "Number not found" << endl;
//		return false;
//
//	}
//	double max() {
//		double max = ptr[0];
//		for (int i = 1; i < size; i++) {
//			if (max < ptr[i]) {
//				double temp = max;
//				max = ptr[i]; 
//			}
//		}
//
//		cout << "max no: " << max << endl;
//		return max;
//	}
//
//	double min() {
//		double min = ptr[0];
//		for (int i = 1; i < size; i++) {
//			if (min > ptr[i]) {
//				double temp = min;
//				min = ptr[i];
//			}
//		}
//
//		cout << "min no: " << min << endl;
//		return min;
//	}
//
//	double avg() {
//		double sum = 0;
//
//		for (int i = 0; i < size; i++) {
//			sum += ptr[i];
//		}
//
//		cout << "average : " << (sum / size) << endl;
//		return (sum / size);
//	}
//	void display() {
//		for (int i = 0; i < size; i++) {
//			cout << ptr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	~number() {
//		cout << "heap memory freed!" << endl;
//		delete[]ptr;
//	}
//};
//int main(){
//	
//	number n1(5);
//	n1.setvalues();
//	n1.findNo(1);
//	n1.max();
//	n1.min();
//	n1.avg();
//	n1.display();
//
//
//	return 0;
//}