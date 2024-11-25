#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    int temp = abs(number);  // Take the absolute value to handle negative numbers

    while (temp != 0) {
        count++;
        temp /= 10;  // Remove the last digit
    }

    // Special case for the number 0
    if (number == 0) {
        count = 1;
    }

    cout << "The number of digits is: " << count << endl;

    return 0;
}
