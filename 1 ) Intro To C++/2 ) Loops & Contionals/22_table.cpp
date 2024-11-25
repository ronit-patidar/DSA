#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking input from the user
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Loop to print the multiplication table of the entered number
    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
