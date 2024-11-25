#include <iostream>
using namespace std;

int main() {
    int x, y;

    // Taking input for the coordinates of the point
    cout << "Enter the x and y coordinates of the point: ";
    cin >> x >> y;

    // Check if the point is on the origin
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    }
    // Check if the point lies on the y-axis
    else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    }
    // Check if the point lies on the x-axis
    else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    }
    // If none of the above, the point is in a quadrant (not on an axis)
    else {
        cout << "The point lies in a quadrant (not on an axis)." << endl;
    }

    return 0;
}
