#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,1,2,1};
    int* ptr=arr;
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
}