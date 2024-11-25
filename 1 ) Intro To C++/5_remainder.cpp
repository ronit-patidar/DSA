#include <iostream>

using namespace std;
// use of modulo opertor is to find remainder
int main() {
    int num1, num2;

    // Taking two integers as input
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    // Checking if the second number is not zero to avoid division by zero error
    if (num2 != 0) {
        int remainder = num1 % num2;  // Finding remainder
        cout << "The remainder when " << num1 << " is divided by " << num2 << " is: " << remainder << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
