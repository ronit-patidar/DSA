 #include<iostream>
using namespace std;
class Node{ // user defined datatype
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
class DLL{ // user defined data structure
public:
     Node* head; // NULL ka val , next nahi hota 
     Node* tail;
     int size;
    DLL(){
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
        temp->prev=tail;//extra
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
        head->prev=temp;//extra
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
        t->prev=temp;//extra
        t->next->prev=t;// extra
        size++;
       }

   }
    void deleteAtHead(){
        if(size==0) {
            cout<<"LL is empty ";
            return;
        }
        head=head->next;
        if(head)head->prev=NULL;// extra 
        if(head==NULL) tail=NULL;//extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
        cout<<"LL is empty ";
        return;
        } 
        else if(size==1){// extra
            deleteAtHead();
        return;
        } 
        Node* temp=tail->prev;
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
            temp->next->prev=temp;//extra
            size--;
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
            if(idx<size/2){
                Node* temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                return temp->val;
            }
            else{//idx>idx
            Node* temp=tail;
            for(int i=1;i<size-idx;i++){
                temp=temp->prev;
            }
             return temp->val;
            }
        }
    }  
};
int main(){
  DLL list;
  list.insertAtTail(10);
  list.insertAtTail(20);
  list.insertAtTail(30);
  list.insertAtTail(40);
  list.insertAtTail(50);
  list.insertAtTail(60);
//   list.display();
//   list.insertAtTail(20);
//   list.display();
//   list.insertAtidx(2,60);
//   list.display();
//   list.deleteAtHead();
//   list.display();
//   list.deleteAtTail();
//   list.display();
//   list.deleteAtIdx(0);
//   list.deleteAtIdx(5);
//   list.deleteAtIdx(2);
    // cout<<list.getAtidx(0);
    // cout<<endl;
    // cout<<list.getAtidx(0); //wrong
    // cout<<endl;
    // cout<<list.getAtidx(2);
    // cout<<endl;
    // cout<<list.getAtidx(3);
    // cout<<endl;
    // cout<<list.getAtidx(4);
    // cout<<endl;
    // cout<<list.getAtidx(5); //wrong
    // cout<<endl;
    // list.display();


}