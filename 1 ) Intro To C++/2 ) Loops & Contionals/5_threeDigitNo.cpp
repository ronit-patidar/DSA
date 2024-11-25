#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking input from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Checking if the number is a three-digit number
    if (number >= 100 && number <= 999) {
        cout << "The number is a three-digit number." << endl;
    } else {
        cout << "The number is not a three-digit number." << endl;
    }

    return 0;
}
