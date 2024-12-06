#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 
bool checkAnagram(string &str,string &str1){
   if(str.size()!=str1.size()) return false;
   sort(str.begin(),str.end());
   sort(str1.begin(),str1.end());
   int i=0;
   int j=0;
   bool flag=true;
   while(i < str.size() && j < str1.size()){
        if(str[i]!=str1[j]) flag = false;
        i++;
        j++;
   }
   return flag;
}
int main(){
    // anagram -> word is made by rearranging 
   string s1="secure";
   string s2="rescue";
   cout<<checkAnagram(s1,s2);
}