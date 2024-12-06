#include<iostream>
using namespace std;
int main(){
    int arr[]={0,6,0,7,6,0,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0){
             swap(arr[i],arr[j]);
             j--;
             i++;
        }
        else i++;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}