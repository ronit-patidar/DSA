#include<iostream>
using namespace std;
class Node{ // user defined datatype
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{ // user defined data structure
public:
     Node* head; // NULL ka val , next nahi hota 
     Node* tail;
     int size;
    LinkedList(){
           head=tail=NULL;
           size=0;
    } 
   void insertAtTail(int val){
       Node* temp=new Node(val);
       if(size==0){
        head=tail=temp;
       }
       else{
        tail->next=temp;
        tail=temp;
       }
       size++;
   }
   void insertAtHead(int val){
       Node* temp=new Node(val);
       if(size==0){
        head=tail=temp;
       }
       else{
        temp->next=head;
        head=temp;
       }
       size++;
   }
   void insertAtidx(int idx,int val){
       if(idx<0 || idx>size) cout<<"Invalid idx"<<endl;
       else if(idx==0) insertAtHead(val);
       else if(idx==size) insertAtTail(val);
       else{
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
       }

   }
    void display(){
      Node* temp=head;
      while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
    int getAtidx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid idx";
            return -1;
        }
        else if(idx==0) head->val;
        else if(idx==size-1) tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }  
    void deleteAtHead(){
        if(size==0) {
            cout<<"LL is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
        cout<<"LL is empty ";
        return;
        } 
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
            temp->next=NULL;
            tail=temp;
            size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid idx ";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll; //{ }
    ll.insertAtTail(10); // { 10->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;


    ll.insertAtTail(20);  // {10->20->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;


    ll.insertAtTail(30);  // {10->20->30->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;


    ll.insertAtTail(40);  // {10->20->30->40->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;

    ll.insertAtHead(50);  // {50->10->20->30->40->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;

    ll.insertAtHead(24);  // {24->50->10->20->30->40->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;

    ll.insertAtidx(4,80);  // {24->50->10->20->80->30->40->NULL}
    ll.display();
    cout<<"size "<<ll.size<<endl;

    cout<<ll.getAtidx(2)<<endl;

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIdx(3);
    ll.display();
 
}