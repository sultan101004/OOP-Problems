//#include<iostream>
//using namespace std;
//
//class Population {
//
//	double pop, birth, death;
//
//public:
//	Population(double a = 0, double b= 0, double c= 0):pop(a), birth(b), death(c){}
//	
//	double birthRate()const  {
//		
//		return (birth / pop)*100;
//	}
//	double deathRate()const {
//
//		return (death / pop)*100;
//	}
//
//	void display()const {
//		cout << endl;
//		cout << "Births: " << birth << endl;
//		cout << "Deaths: " << death << endl;
//		cout << endl;
//	}
//	
//};
//
//int main() {
//
//	Population P1(200000, 2000, 300);
//	cout << "Birth Rate : " << P1.birthRate() << endl;
//	cout << "Death Rate : " << P1.deathRate() << endl;
//	P1.display();
//
//	return 0;
//}