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
int size(Node* head){
    int n=0;
    while(head!=NULL){
        n++; 
        head=head->next;     
    }
    return n;
}
void displayrec(Node* head){ // TC O(n)  // SC O(n)
    if(head==NULL) return; // base csae
    cout<<head->val<<" "; // kaam
    displayrec(head->next); // call

}
void revdisplayrec(Node* head){ // TC O(n)  // SC O(n)
    if(head==NULL) return;
    revdisplayrec(head->next);
    cout<<head->val<<" ";

}
void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
}
int main(){
    // initializing
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

     //linking
    a->next=b;
    b->next=c;
    c->next=d;
    
    //display(a);
    //cout<<size(a);
        cout<<endl;
    //displayrec(a); 
        cout<<endl;
    revdisplayrec(a); // in reverse order
    //display(a);
    // cout<<endl;
    // insertAtEnd(a,80);
    // display(a);
}