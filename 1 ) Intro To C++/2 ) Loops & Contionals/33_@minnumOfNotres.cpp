#include <iostream>
using namespace std;

int main() {
    int amount;
    int notes500 = 0, notes200 = 0, notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;

    // Taking input for the amount
    cout << "Enter the amount: ";
    cin >> amount;

    // Calculate the number of each note required, from highest to lowest
    if (amount >= 500) {
        notes500 = amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        notes200 = amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        notes100 = amount / 100;
        amount %= 100;
    }
    if (amount >= 50) {
        notes50 = amount / 50;
        amount %= 50;
    }
    if (amount >= 20) {
        notes20 = amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        notes10 = amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        notes5 = amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        notes2 = amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        notes1 = amount / 1;
        amount %= 1;
    }

    // Display the result
    cout << "Minimum number of notes required:" << endl;
    cout << "500: " << notes500 << endl;
    cout << "200: " << notes200 << endl;
    cout << "100: " << notes100 << endl;
    cout << "50: " << notes50 << endl;
    cout << "20: " << notes20 << endl;
    cout << "10: " << notes10 << endl;
    cout << "5: " << notes5 << endl;
    cout << "2: " << notes2 << endl;
    cout << "1: " << notes1 << endl;

    return 0;
}
