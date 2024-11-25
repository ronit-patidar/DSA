#include <iostream>
using namespace std;

// Function to print even numbers
void printEvenNumbers() {
    cout << "Even numbers between 1 and 100 are: " << endl;
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Function to print odd numbers
void printOddNumbers() {
    cout << "Odd numbers between 1 and 100 are: " << endl;
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Call the functions to print even and odd numbers
    printEvenNumbers();
    printOddNumbers();

    return 0;
}
