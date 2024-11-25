#include <iostream>
using namespace std;

int main() {
    char ch;

    // Taking input from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is a vowel or consonant
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        cout << ch << " is a vowel." << endl;
    } 
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant." << endl;
    } 
    else {
        cout << ch << " is not an alphabet letter." << endl;
    }

    return 0;
}
