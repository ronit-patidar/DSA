#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    //m1
    // string s;
    // cout<<"Enter a character";
    // getline(cin,s);
    // cout<<s;
    // reverse(s.begin(),s.end());
    // cout<<s;
    //m2
    string s;
    cout<<"Enter a character : ";
    getline(cin,s);
    string temp =s;
    reverse(temp.begin(),temp.end());
    s=s+temp;
    cout<<s;
    
}