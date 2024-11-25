#include <iostream>
using namespace std;

int main() {
    int marks;

    // Taking input for marks
    cout << "Enter the marks of the student: ";
    cin >> marks;

    // Using the ternary operator to check if marks are greater than 33
    string result = (marks > 33) ? "Pass" : "Fail";

    // Displaying the result
    cout << "Result: " << result << endl;

    return 0;
}
