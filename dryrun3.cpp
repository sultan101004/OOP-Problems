#include<iostream>
using namespace std;

////q1
//void mystery(int*& ptr, int s)
//{
//	ptr = new int[s];
//	for (int i = 0, j = s; i < s; ++i, j--)
//		*(ptr + i) = j;
//
//}
//
//int main()
//{
//	int* ptr, s = 5;
//
//	mystery(ptr, s);
//
//	for (int i = 0; i < s; ++i) {
//		cout << ptr[i] << " ";
//	}
//
//	delete[] ptr; 
//	ptr = nullptr;
//
//	return 0;
//}


//q2
const char* c[] = { "oop", "exam" , "oopsmid-1", "mid" };
char const** cp[] = { c + 2, c + 3, c , c + 1 };
char const*** cpp = cp;

int main() {

    cout << *cpp[3] << endl; // c[2] = cp[0] => oopsmid-1 ,cp[1] => "mid"
    cout << *(*(*(cpp + 2) + 2) + 5) << endl; // cp[2][2][3] = 's'
    cout << (*cpp)[-1] << endl; // cp[1][2-1] => "exam"
    cout << *(cpp + 3)[-1] << endl; // cp[0+3][1-1] => "oop"    

    return 0;
}
//
//int main()
//{
//	int array[2][5][2] = { 10,20,30,40,50,60,70,
//	80,90,100,18,21,3,4,
//	5,6,7,81,9,11 };
//
//	int(*p)[5][2];
//	p = array;
//	for (int i = 0; i < 2; i++)
//		cout << "\nthe value is " << *((int*)(p + 1) + (1 * 2) + i);
//	return 0;
//}
//
//class dummy {
//	float z;
//	int x, y;
//public:
//	dummy(int x = 0, int y = 1) :x(x + 2), y(y + 3) {
//
//		z = this->x + this->y + 1;
//	}
//	void print() {
//		cout <<" x = " << x
//			<< " y = " << y
//			<< " z = " << z;
//
//	}
//};
//int main() {
//	dummy d(10);
//	d.print();
//
// }
//
//class a {
//	static int x;
//public:
//public:
//	a() { cout << "constructor of a\n"; }
//	a f() {
//		cout << "f() of a\n";
//		x++;
//		cout << x << endl;
//		return a();
//	}
//	~a() { cout << "destructor of a\n"; }
//};
//int a::x = 0;
//
//int main() {
//
//	a a;
//	a.f().f();
//
//	return 0;
//}