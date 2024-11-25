#include <iostream>

using namespace std;

int main() {
    int num;

    // Taking input
    cout << "Enter an integer: ";
    cin >> num;

    // Checking if the number is even or odd using the modulus operator
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}
