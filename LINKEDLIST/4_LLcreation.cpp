#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // linking
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    // random memory allocation
                // cout<<&a<<endl;
                // cout<<a.val<<endl;

                // cout<<&b<<endl;
                // cout<<b.val<<endl;

                // cout<<&c<<endl;
                // cout<<c.val<<endl;

                // cout<<&d<<endl;
                // cout<<d.val<<endl;



    // (a.next)->val=100; //change
    // cout<<b.val;
    
                // cout<<a.val<<endl;
                // cout<<(a.next)->val<<endl;
                // cout<<((a.next)->next)->val<<endl;
                // cout<<(((a.next)->next)->next)->val<<endl;
                
    
    // traverse
    Node temp=a;
    while(1){
        cout<<temp.val<<endl;
        if(temp.next==NULL) break;
        temp =*(temp.next);
    }
}