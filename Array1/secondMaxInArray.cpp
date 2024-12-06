#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];//INT_MIN
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=arr[0];//INT_MIN
    for(int i=0;i<=n-1;i++){
    if(smax<arr[i] && arr[i]!=max) 
    smax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
}

