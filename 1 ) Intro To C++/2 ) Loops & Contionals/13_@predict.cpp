#include<iostream>
using namespace std;
// right to left precedency of ternary operator
int main(){ 
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout<<"Value of x : "<<x;
    return 0;
}