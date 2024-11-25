#include <iostream>
using namespace std;

int main() {
    // Print uppercase alphabets with their ASCII values
    cout << "Uppercase Alphabets and their ASCII values:" << endl;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " : " << int(ch) << endl;
    }

    // Print lowercase alphabets with their ASCII values
    cout << "\nLowercase Alphabets and their ASCII values:" << endl;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " : " << int(ch) << endl;
    }

    return 0;
}
