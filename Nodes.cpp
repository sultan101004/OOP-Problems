//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//
//    Node(int d) : data(d), next(nullptr) {}
//    ~Node() {
//        //cout << "\nDest" << endl;
//    }
//};
//
//int oho(Node* head) {
//    int count = 0;
//    Node* current = head;
//    cout << "Values: ";
//    while (current != nullptr) {
//        count++;
//        cout << current->data << " ";
//        current = current->next;
//    }
//    cout << "\nCounts: ";
//    return count;
//}
//int main() {
//
//    Node* N = new Node(1);
//    N->next = new Node(2);
//    N->next->next = new Node(3);
//
//    cout << oho(N);
//
//    delete N;
//    N = nullptr;
//    return 0;
//}