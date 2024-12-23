#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // transpose
        for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        cout<<endl;
    }
          for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // reverse
     for(int k=0;k<3;k++){
        int i=0;
        int j=2;
        while (i<j){
        int temp=arr[k][i];
        arr[k][i]=arr[k][j];
        arr[k][j]=temp;
        i++;
        j--;
     }
    }
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       cout<<arr[i][j]<<" ";
     }
     cout<<endl;
}
}

