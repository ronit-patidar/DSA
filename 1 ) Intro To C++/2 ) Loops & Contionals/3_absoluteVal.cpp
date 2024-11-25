#include <iostream>
#include <cstdlib>  // For abs function (integer)

using namespace std;
 
int absoluteVal(int n){
    if(n>0) return n;
    else return -n;
} 

int main() {
    int num;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Printing the absolute value of the number
    cout << "The absolute value of " << num << " is " << abs(num) << endl;
    //cout<<absoluteVal(num);
    return 0;
}
