#include<iostream>
using namespace std;
int main(){
    // only for sqare matrix n*n
    int arr[4][4]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32};
             for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
       cout<<endl;
    }
         for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
          int temp=arr[i][j];
          arr[i][j]=arr[j][i];
          arr[j][i]=temp;
        }
    }
         for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}


