#include<iostream>
#include<unordered_map>
using namespace std; 
int main(){
     // map<key,value> pair
    unordered_map<string,int> m;

    m["Ronit"]=69; // O(1) insert
    m["Rosh"]=70;
    m["Sahil"]=72;

    m.erase("Rosh");
                         
    // pair<string,int> p2;
    // pair<string,int> p1;
    // p1.first="Ronit";
    // p1.second=69;
    // m.insert(p1); //O(1)
    
    // p2.first="rosh";
    // p2.second=70;
    // m.insert(p2); //O(1)

    // pair<string,int> p3;
    // p3.first="Sahil";
    // p3.second=72;
    // m.insert(p3); //O(1)
    
    // random order print
    for( auto p: m ){ // O(1)
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<"Size : "<<m.size()<<endl;
    cout<<m["Ronit"]<<endl;
}
