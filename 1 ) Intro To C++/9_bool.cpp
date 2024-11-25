#include <iostream>

using namespace std;

int main() {
    bool isRaining;  // Declare a boolean variable

    // Assigning a value to the boolean variable
    isRaining = true;

    // Using the boolean variable in a conditional statement
    if (isRaining) {
        cout << "It's raining, take an umbrella!" << endl;
    } else {
        cout << "It's not raining, you don't need an umbrella." << endl;
    }

    // Changing the value of the boolean variable
    isRaining = false;

    // Checking again
    if (isRaining) {
        cout << "It's raining, take an umbrella!" << endl;
    } else {
        cout << "It's not raining, you don't need an umbrella." << endl;
    }

    return 0;
}
