#include <iostream>

using namespace std;

int main() {
    int num = 10;

    cout << "Initial value of num: " << num << endl;

    // Pre-increment
    cout << "Pre-increment: " << ++num << endl;
    cout << "Value after pre-increment: " << num << endl;

    // Post-increment
    cout << "Post-increment: " << num++ << endl;
    cout << "Value after post-increment: " << num << endl;

    // Pre-decrement
    cout << "Pre-decrement: " << --num << endl;
    cout << "Value after pre-decrement: " << num << endl;

    // Post-decrement
    cout << "Post-decrement: " << num-- << endl;
    cout << "Value after post-decrement: " << num << endl;

    return 0;
}
