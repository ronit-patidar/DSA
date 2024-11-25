#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking 3 positive integers as input
    cout << "Enter the first positive integer: ";
    cin >> num1;
    cout << "Enter the second positive integer: ";
    cin >> num2;
    cout << "Enter the third positive integer: ";
    cin >> num3;

    // Finding the greatest number
    if (num1 >= num2 && num1 >= num3) {
        cout << "The greatest number is: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << "The greatest number is: " << num2 << endl;
    }
    else {
        cout << "The greatest number is: " << num3 << endl;
    }

    return 0;
}
