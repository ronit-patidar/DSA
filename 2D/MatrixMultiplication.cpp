#include<iostream>
using namespace std;
int main(){
    // first matrix
    cout<<"Enter the row no";
    int m;
    cin>>m;
    cout<<"Enter the colu no";
    int n;
    cin>>n;
    int a[m][n];
    // second matrix
     cout<<"Enter the second row no";
    int p;
    cin>>p;
    cout<<"Enter the second colu no";
    int q;
    cin>>q;
    int b[p][q];
   // input in first matrix
   cout<<"Enter the element in array";
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
      cout<<"Enter the element in second array";
      // input in second matrix

    for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>b[i][j];
    }
   }
   if(n==p){
         int  res[m][q];
       for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
         res[i][j]=0;
        for(int k=0;k<p;k++){
            res[i][j]+=a[i][k]*b[k][j];
            }
          }
       }
   //  print
       for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<res[i][j]<<" ";
        }
    cout<<endl;
    }
   }
   else 
   {cout<<"Matrix multiplication is not possible";}
}
