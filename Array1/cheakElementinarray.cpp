#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number to cheack wheather is it present or not  ";
    cin>>x;
//     for(int i=0;i<=n-1;i++){
//       if(arr[i]=x){
//         cout<<"The number is present in array ";
//       }
//       else{
//        cout<<"The number is not present in array ";
//       }
//         break;
// }

// cheak mark
bool flag=false;
        for(int i=0;i<=n-1;i++){
      if(arr[i]==x) flag=true;
      }
     if(flag==true) cout<<"present";
     else cout<<"absent";
}

