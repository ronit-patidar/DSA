#include<iostream>
#include<string>
using namespace std;
bool isconsonent(char ch){
    // ch=int(ch)
    if(int(ch)<65) return false;
    else if(int(ch)>122) return false;
    else if(int(ch)>90 && int(ch)<97) return false;
    else if(ch=='a' || ch=='A') return false;
    else if(ch=='e' || ch=='E') return false;
    else if(ch=='i' || ch=='I') return false;
    else if(ch=='o' || ch=='O') return false;
    else if(ch=='u' || ch=='U') return false;
    else return true;
}
int main(){
    string s;
    cout<<"Enter the char in string : ";
    cout<<endl;
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(isconsonent(s[i])) count++;
    }
    cout<<count<<endl;
    }

