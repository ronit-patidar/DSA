#include<iostream>
using namespace std;
// 153 is Armstrong 
// cube of 1 + cube of 5 + cube of 3 = 153
void checkarmstrong(int n){ // O(d) or (log10 n)
    int original=n;
    int sum=0;
    while(n > 0){
        int digit = (n % 10) ;
        sum += digit*digit*digit;
        n /= 10 ;
    }
    if(sum==original) cout<< original<<endl;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        checkarmstrong(i);
    }
}