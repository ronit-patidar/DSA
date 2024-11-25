#include <iostream>
using namespace std;

int main() {
    int year;

    // Prompt the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    // A year is a leap year if:
    // 1. It is divisible by 4, AND
    // 2. It is NOT divisible by 100, UNLESS
    // 3. It is divisible by 400 (then it is a leap year)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
