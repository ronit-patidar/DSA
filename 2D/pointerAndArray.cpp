#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int* ptr =&arr[0]; //giving address
    // &arr[0] = arr 
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr=8;
     *ptr++; //ptr is pointing to 2nd element
     *ptr=9;
     *ptr--; //ptr is pointing to 1st element
        for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        *ptr++;// next 4 byte in int 
     }
    //      for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    //  }

     // print through pointer
     ptr=arr;// ptr is pointing to 1st element




}