#include <iostream>

using namespace std;

int main() {
    float subject1, subject2, subject3, subject4, subject5, totalMarks, obtainedMarks, percentage;

    // Taking input for marks in five subjects
    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    // Assuming the total marks per subject is 100
    totalMarks = 5 * 100;  // Total marks for 5 subjects
    obtainedMarks = subject1 + subject2 + subject3 + subject4 + subject5;  // Sum of the marks obtained

    // Calculating percentage
    percentage = (obtainedMarks / totalMarks) * 100;

    // Displaying the result
    cout << "Total marks obtained: " << obtainedMarks << " out of " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
