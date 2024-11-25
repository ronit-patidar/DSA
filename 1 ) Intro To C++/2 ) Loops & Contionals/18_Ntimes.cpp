#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for the number of times to print "Hello, World!"
    cout << "Enter the number of times to print 'Hello, World!': ";
    cin >> n;

    // Using a for loop to print "Hello, World!" n times
    for (int i = 0; i < n; i++) {
        cout << "Hello, World!" << endl;
    }

    return 0;
}
