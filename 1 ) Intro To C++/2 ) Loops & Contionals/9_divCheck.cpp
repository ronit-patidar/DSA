#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking a positive integer as input
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if divisible by 5 or 3, but not 15
    if ((number % 5 == 0 || number % 3 == 0) && number % 15 != 0) {
        cout << number << " is divisible by 5 or 3, but not by 15." << endl;
    } else {
        cout << number << " does not satisfy the condition." << endl;
    }

    return 0;
}
