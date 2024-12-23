#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 
bool checkAnagram(string &str,string &str1){
   if(str.size()!=str1.size()) return false; // if length are diff than string can't be anagram 
   sort(str.begin(),str.end());
   sort(str1.begin(),str1.end());
   return (str==str1);
}
int main(){
    // anagram -> word is made by rearranging 
   string s1="secure";
   string s2="rescue";
   cout<<checkAnagram(s1,s2);
}