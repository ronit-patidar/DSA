#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,6,2,11,0,47};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
           if(arr[i]!=arr[j]) cout<<"NOT PRESENT";
           else cout<<"present";
        }
        break;
    }
}
    
