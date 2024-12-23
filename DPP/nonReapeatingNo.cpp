#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,4,7}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx=-1;
    for(int i=0;i<n-1;i++){
      if(arr[i]==arr[i+1]) i++;
      else idx=i;
      break;
    }
    cout<<idx;
}