#include<iostream>
using namespace std;
int main(){
       string s="abbcdeffghh";
       //cin>>s;
       int count=0;
       int n=s.size();
       for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        else if(n==2 && s[i]!=s[i+1]){
            count=1;
            break;
        }
        else if(i==0){
            if(s[i]!=s[i+1])
            count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        else{
            if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                count++;
            }
        }
       }  
       cout<<count;
}
