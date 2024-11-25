#include <iostream>
using namespace std;

int main() {
    int day;

    // Taking input for the day number
    cout << "Enter a number (1-7) to get the day of the week: ";
    cin >> day;

    // Using switch-case to determine the day of the week
    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
