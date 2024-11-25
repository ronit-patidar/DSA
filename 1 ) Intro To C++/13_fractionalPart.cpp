#include <iostream>

using namespace std;

int main() {
    float num, fractionalPart;

    // Taking float input
    cout << "Enter a real number: ";
    cin >> num;

    // Getting the integer part by typecasting to int
    int integerPart = (int) num;

    // Subtracting the integer part from the original number to get the fractional part
    fractionalPart = num - integerPart;

    // Displaying the fractional part
    cout << "The fractional part of " << num << " is " << fractionalPart << endl;

    return 0;
}
