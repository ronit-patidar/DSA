#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;  // Use long long to handle large factorials
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply fact by the current number
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long result = factorial(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}
