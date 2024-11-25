#include <iostream>
#include <cmath>  // For using M_PI constant for pi

using namespace std;

int main() {
    float radius, area;

    // Taking input for the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculating the area of the circle using the formula: Area = π * r^2
    area = M_PI * radius * radius;  // Using M_PI for the value of pi

    // area = 3.14 * radius * raduis
    
    // Displaying the result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
