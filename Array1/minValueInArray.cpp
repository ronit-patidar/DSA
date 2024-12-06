// not sure about proagram is correct or not
#include<iostream>
using namespace std;
int main(){
    int arr[]={143,2,4,90,1};
    int min=INT32_MAX;
    for(int i=0;i<5;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<min<<endl;
}

