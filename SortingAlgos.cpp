//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//
//void bubbleSort(int* arr, int n) {
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (arr[i] < arr[j]) {
//                int temp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = temp;
//            }
//        }
//    }
//    //    return arr;
//}
//
//void insertionSort(int* arr, int n) {
//
//    int smallest = arr[0];
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] < arr[i]) {
//                int temp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = temp;
//            }
//        }
//    }
//}
//
//void selectionSort(int* arr, int n) {
//
//    int end = n - 1;
//    int start = 0;
//
//    while (start < end) {
//
//
//        int minInd = start;
//        int maxInd = end;
//
//
//        for (int i = start; i <= end; i++) {
//            if (arr[i] < arr[minInd]) minInd = i;
//            if (arr[i] > arr[maxInd]) maxInd = i;
//        }
//
//        swap(arr[start], arr[minInd]);
//
//        if (maxInd == start) maxInd = minInd;
//
//        swap(arr[end], arr[maxInd]);
//
//        start++;
//        end--;
//    }
//
//}
//void display(int* arr) {
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << " ";
//    }cout << endl;
//}
//
//int main() {
//
//    int arr[5] = { 4,2,5,3,1 };
//    // bubbleSort(arr, 5);
//    selectionSort(arr, 5);
//    // insertionSort(arr, 5);
//
//    display(arr);
//    return 0;
//}