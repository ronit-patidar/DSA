#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    cout<<"Enter the elements in 2D array ";
    // input
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }

    }
    // output
     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
cout<<endl;
    }
}

