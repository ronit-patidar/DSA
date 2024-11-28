#include<iostream>
using namespace std;
// doubly ll nodes
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void display(Node* head){
     while(head){
        cout<<head->val<<" ";
        head=head->next;
     }
     cout<<endl;
}
void displaytail(Node* tail){
      while(tail){
        cout<<tail->val<<" ";
        tail=tail->prev;
      }
      cout<<endl;
}
void displayrec(Node* head){//O(n)
    if(head==NULL) return ;//base case
    cout<<head->val<<" ";
    displayrec(head->next);
}
void displayrecrev(Node* head){//O(n)
    if(head==NULL) return ;//base case
    displayrecrev(head->next);
    cout<<head->val<<" ";
}
int main(){
    // 10 20 30 40 50 
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    a->prev=NULL;
    
    // display(a);
    // displayrec(a);
    // cout<<endl;
    // displayrecrev(a);
    // cout<<endl;
    // displaytail(e);
    // cout<<endl;

}