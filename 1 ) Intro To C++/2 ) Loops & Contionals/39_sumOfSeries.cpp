#include <iostream>
using namespace std;
int seriesSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;  // Subtract even numbers
        } else {
            sum += i;  // Add odd numbers
        }
    }
    return sum;
}
// series : 1-2+3-4+5-6 upto n
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = seriesSum(n);
    cout << "Sum of the series up to " << n << " is: " << result << endl;

    return 0;
}
