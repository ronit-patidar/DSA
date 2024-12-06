#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    // 2 TO 5
    string s="abcdef";
    reverse(s.begin()+2,s.begin()+6);
    cout<<s;
}