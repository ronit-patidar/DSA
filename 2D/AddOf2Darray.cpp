#include<iostream>
using namespace std;
int main(){
    int arr1[4][2]={2,4,6,8,10,12,14,16};
    int arr2[4][2]={3,5,7,9,11,13,15,17};
    int arr3[4][2];
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
             arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
         for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
             cout<<arr3[i][j]<<" ";
        }
cout<<endl;
    }
}


 // STORED IN SAME ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int matrix1[3][3]={1,2,3,4,5,6,7,8,9};
//     int matrix2[3][3]={10,11,12,13,14,15,16,17,18};

//         for(int i=0;i<3;i++){
//           for(int j=0;j<3;j++){
//            matrix1[i][j]=matrix1[i][j]+matrix2[i][j];
//         }
//       }


//       for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix1[i][j]<<" ";
//         }
//         cout<<endl;
//       }
//     }
