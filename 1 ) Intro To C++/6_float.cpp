#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char operation;

    // Taking input from the user
    cout << "Enter first number (float): ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number (float): ";
    cin >> num2;

    // Perform the operation based on the entered operator
    if (operation == '+') {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is undefined!" << endl;
        }
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
