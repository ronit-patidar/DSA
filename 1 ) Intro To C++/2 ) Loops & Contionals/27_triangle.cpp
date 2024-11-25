
#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    // Taking input for the three sides of the triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check if all three sides are equal
    if (side1 == side2 && side2 == side3) {
        // If all sides are equal, it's an Equilateral triangle
        cout << "The triangle is Equilateral." << endl;
    }
    // Check if any two sides are equal
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        // If any two sides are equal, it's an Isosceles triangle
        cout << "The triangle is Isosceles." << endl;
    }
    // If no sides are equal, it's a Scalene triangle
    else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
