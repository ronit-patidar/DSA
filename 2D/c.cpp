#include<iostream>
#include<vector>
using namespace std;
void reversePart(int si,int ei,vector<int>& v){
    while(si<ei){
    int temp=v[si];
    v[si]=v[ei];
    v[ei]=temp;
    si++;
    ei--;
    }
     return ;
}
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(6);
   v.push_back(2);
   v.push_back(3);
   v.push_back(7);
   v.push_back(4);
   int k=49;
   int n=v.size();
   if(k>n) k=k%n;
   for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;

   reversePart(0,n-1-k,v);
   reversePart(n-k,n-1,v);
   reversePart(0,n-1,v);

   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
}