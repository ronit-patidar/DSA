#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking input from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is divisible by both 5 and 3
    if (number > 0) {
        if (number % 5 == 0 && number % 3 == 0) {
            cout << "The number is divisible by both 5 and 3." << endl;
        } else {
            cout << "The number is not divisible by both 5 and 3." << endl;
        }
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}
