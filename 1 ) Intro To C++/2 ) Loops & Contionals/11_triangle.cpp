#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    // Taking three numbers as input
    cout << "Enter the first side: ";
    cin >> a;
    cout << "Enter the second side: ";
    cin >> b;
    cout << "Enter the third side: ";
    cin >> c;

    // Check if they satisfy the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The numbers can be sides of a triangle." << endl;
    } else {
        cout << "The numbers cannot form a triangle." << endl;
    }

    return 0;
}
