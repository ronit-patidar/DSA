#include <iostream>

using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Taking input for principal, rate, and time
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculating simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
