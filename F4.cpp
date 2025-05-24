//#include <iostream>
//#include <string>
//#include<cstring>
//#include <iomanip>
//#include<fstream>
//using namespace std;
//
//
//////void switching(char ptr[][], int Old, int New) {
////    
////    cout << &ptr[Old] << endl;
////    cout << &ptr[New] << endl;
////
////    char* tr = &ptr[New];
////    ptr[New] = ptr[Old];
////    ptr[Old] = *tr;
////
////    cout << "After" << endl;
////    cout << &ptr[Old] << endl;
////    cout << &ptr[New] << endl;
////
////}
//bool Search(char arr[][20], string x) {
//    string a;
//    for (int i = 0; i < 20; i++) {
//        a = "";
//        for (int j = 0; j < 20; j++) {
//
//            //cout << arr[i][j] << " | ";
//            a += arr[i][j];
//
//            if (a == x) {
//                cout << "Is " << i+1 << " th no word";
//                return true;
//            }
//
//        };
//       
//    }
//       return false;
//}
//
//void display(char arr[][20],int & index) {
//    
//    for (int i = 0; i < index; i++) {
//        for (int j = 0; j < 20; j++) {
//            cout << arr[i][j];
//        }cout << endl;
//    }
//}
//
//bool changeWord(char arr[][20], char *x, int ind) {
//    
//    
//    for (int i = 0; i < 20; i++) {
//        arr[ind-1][i] = x[i];
//        //cout << x[i];
//    }
//    return false;
//}
//
//void DeleteWord(char arr[][20] ,int &index) {
//    index -= 1;
//    int num;
//    cout << "Num of name?" << endl;
//    cin >> num;
//    for (; num < index; num++) {
//        for (int j = 0; j < 20; j++) {
//            arr[num-1][j] = arr[num + 1][j];
//        }
//    }
//    display(arr, index);
//}
//int main() {
//    
//    char names[20][20] = {
//        "Alice Johnson", "Bob Smith", "Charlie Brown", "David Wilson",
//        "Eva Green", "Frank Miller", "Grace Lee", "Henry Taylor",
//        "Isla Martinez", "Jack White", "Lily Adams", "Michael Clark",
//        "Nora Davis", "Oliver Thompson", "Penelope Harris", "Quentin Young",
//        "Rachel King", "Samuel Scott", "Tina Robinson", "Victor Lewis"
//    };
//
//    string x = "Frank Miller";
//
//    cout << endl;
//    
//    /*cout << x << endl;
//    if (Search(names, x)) {
//        
//        cout << " | Word Found" << endl;
//    }
//    else {
//        cout << "Word Not Found" << endl;
//    }*/
//
//    char y[20] = "Sultan Shah";
//    int num = 3;
//    int index = 20;
//    //changeWord(names, y, num);
//    /*int t;
//    cout << "How many names do you want to remove?" << endl;
//    cin >> t;
//    while (t--) {
//        DeleteWord(names, index);
//    }*/
//    //DeleteWord(names, index);
//    //display(names, index);
//    int choice;
//    cout << " Welcome to naming list! Enter Choice " << endl;
//    cout << "1. Search name" << endl;
//    cout << "2. Change name" << endl;
//    cout << "3. Delete name" << endl;
//
//    cin >> choice;
//    
//    do{
//        switch (choice) {
//        case 1:
//            if (Search(names, x)) {
//                cout << "Word Found!" << endl;
//            }
//            else {
//                cout << "Word not Found" << endl;
//            }
//            break;
//        case 2:
//            changeWord(names, y, 3);
//            break;
//        case 3:
//            DeleteWord(names, index);
//            break;
//        }
//        cout << "1. Search name" << endl;
//        cout << "2. Change name" << endl;
//        cout << "3. Delete name" << endl;
//        
//        cin >> choice;
//    } while (choice < 3 && choice > 0);
//
//    ofstream file("C:\\Users\\sulta\\OneDrive\\Desktop\\Edu\\Names.txt");
//
//    for (int i = 0; i < index; i++) {
//        for (int j = 0; j < 20; j++) {
//            
//                file << names[i][j];
//            }
//        file << endl;
//        
//    }
//
//    file.close();
//
//    return 0;
//}
//
