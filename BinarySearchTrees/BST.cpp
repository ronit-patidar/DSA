#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void printnthLevel(Node* root,int curr,int level){ 
   if(root==NULL) return ; 
   if(curr==level){
        cout<<root->val<<" "; 
        return ;
   }
   printnthLevel(root->left,curr+1,level);  
   printnthLevel(root->right,curr+1,level); 
}
void levelorder(Node* root,int curr){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        printnthLevel(root,1,i);
        cout<<endl;
    }
}
int minimumInTree(Node* root){
    if(root==NULL) return -1 ;
    if(root->left==NULL) return root->val;
    return minimumInTree(root->left);
}
int maximumInTree(Node* root){
    if(root==NULL) return -1 ;
    if(root->right==NULL) return root->val;
    return maximumInTree(root->right);
}
int predecessor(Node* root){
    if(root->left==NULL) return -1;
    Node* pred=root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    return pred->val;
}
int successor(Node* root){
    if(root->right==NULL) return -1;
    Node* succ=root->right;
    while(succ->left!=NULL){
        succ=succ->left;
    }
    return succ->val;
}
int main(){
//         50
//        /  \
//      30    70
//     /  \   /  \
//    20  40 60  80
    Node* a = new Node(50);
    Node* b = new Node(30);
    Node* c = new Node(70);
    Node* d = new Node(20);
    Node* e = new Node(40);
    Node* f = new Node(60);
    Node* g = new Node(80);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // levelorder(a,0);
    // cout<<endl;
    // cout<<minimumInTree(a);
    // cout<<endl;
    // cout<<maximumInTree(a);
    cout<<predecessor(a);
    cout<<endl;
    cout<<successor(a);
}