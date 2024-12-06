#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size or elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // // 1st method
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
   cout<<max<<endl;
//     // 2nd method 
//    // but include preheader file
//         int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     cout<<max<<endl;
}

    
    




