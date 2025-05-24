//#include<iostream>
//using namespace std;
//
//
//void deleting(int** ptr, int x, int* sizes) {
//
//    for (int i = 0; i < x; i++) {
//        delete[] ptr[i]; 
//    }
//    delete[] ptr;
////    return ptr;
//}
//
//
//void print(int **ptr, int x, int* sizes) {
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < sizes[i]; j++) {
//            cout << ptr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void insertion(int **ptr, int x, int *sizes, int *sum) {
//
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < sizes[i]; j++) {
//            cout << "Enter the values for : arr [" << i << "][" << j << "]" << endl;
//            cin >> ptr[i][j];
//            sum[i] += ptr[i][j];
//        }
//        cout << "Sum for row : " << i << " = " <<  sum[i] << endl;
//    }
//}
//
//int** allocation( int x, int* sizes) {
//
//    int** ptr = new int*[x];
//    for (int i = 0; i < x; i++) {
//        ptr[i] = new int[sizes[i]];
//    }
//
//    return ptr;
//}
//
//void totalSum(int* sum, int x) {
//    int total = 0;
//    for (int i = 0; i < x; i++) {
//        total += sum[i];
//    }
//    cout << "total = " << total << endl;
//    
//}
//int main() {
//
//    int rows;
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//    int* sum = new int[rows];
//    
//
//    int* sizes = new int[rows]; // Array to hold sizes of each row
//
//    for (int i = 0; i < rows; i++) {
//        cout << "size for row : " << i + 1 << endl;
//        cin >> sizes[i];
//        sum[i] = 0;
//    }
//
//    int** arr = allocation( rows, sizes);
//    cout << endl;
//    
//    insertion(arr, rows, sizes, sum);
//    cout << endl;
//    
//    print(arr, rows, sizes);
//    cout << endl;
//    
//    deleting(arr, rows, sizes);
//    cout << endl;
//    
//    totalSum(sum, rows);
//    
//	return 0;
//}