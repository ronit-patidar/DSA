#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row no"<<" ";
    cin>>m;
    int n;
    cout<<"Enter the column no"<<" ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
     //storing the transpose 
     int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
    // printing transpose matrix
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
