#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;  // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;  // Fibonacci formula
        a = b;      // Update a to b
        b = c;      // Update b to c
    }
    return b;  // The nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long long result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
