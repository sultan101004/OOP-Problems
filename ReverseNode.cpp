//#include<iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//    Node(int d) : data(d), next(nullptr) {}
//};
//
//Node* reverseList(Node* head) {
//    cout << head->data << " ";
//    if (head == nullptr || head->next == nullptr) {
//        return head;
//    }
//
//    Node* rest = reverseList(head->next);
//    head->next->next = head;
//    head->next = nullptr;
//
//    return rest;
//}
//
//int main() {
//
//    Node* N = new Node(3);
//    N->next = new Node(2);
//    N->next->next = new Node(1);
//
//    reverseList(N);
//yut
//    delete N;
//    N = nullptr;
//
//    return 0;
//}