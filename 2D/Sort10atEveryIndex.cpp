#include<iostream>
using namespace std;
int main(){
     int matrix[5][5];
    int n=sizeof(matrix)/sizeof(matrix[0]);
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=10;
        }
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
cout<<endl;
     }
    }
