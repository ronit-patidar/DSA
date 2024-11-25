#include <iostream>
using namespace std;

int main() {
    char ch;

    // Taking input for the character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an alphabet." << endl;
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    // If it's neither alphabet nor digit, it's a special character
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
