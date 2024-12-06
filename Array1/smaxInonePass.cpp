#include<iostream>
using namespace std;
int main(){
    int arr[]={1,-3,2,5,-2,6,3};
    int max=INT32_MIN;
    int smax=INT32_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>max){
           smax=max;
           max=arr[i];
        }
    }
    
    cout<<max<<endl;
    cout<<smax;
}

