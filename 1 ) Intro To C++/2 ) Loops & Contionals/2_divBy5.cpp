#include <iostream>

using namespace std;

int main() {
    int num;

    // Taking input from the user
    cout << "Enter a positive number: ";
    cin >> num;

    // Checking if the number is divisible by 5
    if (num % 5 == 0) {
        cout << num << " is divisible by 5." << endl;
    } else {
        cout << num << " is not divisible by 5." << endl;
    }

    return 0;
}
