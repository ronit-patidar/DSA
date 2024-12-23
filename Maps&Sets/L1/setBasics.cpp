#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<int> s; // unordered set
    // (insert in random order)
    // unique elements ko store karta he
    s.insert(1); // O(1)
    s.insert(2);
    s.insert(3);
    s.insert(3); // insert only onces duplicates not allow
    s.insert(4);
    s.insert(5);
    s.erase(5); // O(1)
    s.insert(1);
     // search
    int target=4;
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else cout<<"does not exists"<<endl;

    cout<<endl<<"size : ";
    cout<<s.size()<<endl; // size
    // for each loop
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    for(auto ele : s){
        cout<<ele<<" ";
    }
}
