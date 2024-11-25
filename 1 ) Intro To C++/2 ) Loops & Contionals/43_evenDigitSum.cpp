#include <iostream>
using namespace std;

int sumEvenDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  // Get the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum += digit;  // Add the even digit to sum
        }
        n /= 10;  // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumEvenDigits(number);
    cout << "The sum of all even digits of " << number << " is: " << result << endl;

    return 0;
}
