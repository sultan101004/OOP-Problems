#include <iostream>
using namespace std;

// Function to demonstrate memory leak
void memoryLeak() {
    int* leak = new int[10]; // Allocate memory
    // Forget to delete it
    // delete[] leak; // Uncommenting this would fix the leak
    cout << "Memory leak simulated: allocated an array of size 10." << endl;
}

// Function to demonstrate dangling pointer
void danglingPointer() {
    int* ptr = new int(42); // Allocate memory
    delete ptr; // Free the memory
    // Now ptr is a dangling pointer
    // Accessing a dangling pointer leads to undefined behavior
    // Uncommenting the next line would demonstrate this issue
    // cout << "Dangling pointer value (undefined behavior): " << *ptr << endl; // Accessing dangling pointer
    ptr = nullptr; // Fixing by setting to nullptr would prevent this issue
    cout << "Dangling pointer fixed: ptr is now nullptr." << endl;
}

// Function to demonstrate double free error
void doubleFreeError() {
    int* ptr = new int(100);
    delete ptr; // First deletion
    // Uncommenting the next line would cause a double free error
    // delete ptr; // Second deletion
    cout << "Double free error simulated: ptr has been deleted once." << endl;
}

int main() {
    cout << "Simulating memory leak:" << endl;
    memoryLeak(); // Call function to simulate memory leak

    cout << "Simulating dangling pointer:" << endl;
    danglingPointer(); // Call function to simulate dangling pointer

    cout << "Simulating double free error:" << endl;
    doubleFreeError(); // Call function to simulate double free error

    return 0;
}