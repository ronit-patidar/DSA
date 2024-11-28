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
    void display(Node* head){// better than rec // TC O(n)  SC  O(1)
    while(head!=NULL){
        cout<<head->val<<" ";    
        head=head->next;        
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    Node* c=new Node(0);
    c->next=a;
    Node* prev=a;
    Node* curr=a->next;
    while(curr){
        curr->next=prev;
        curr=curr->next;
    }
}