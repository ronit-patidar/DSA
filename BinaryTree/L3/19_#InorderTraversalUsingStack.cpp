// leetcode : 94
// link :https://leetcode.com/problems/binary-tree-inorder-traversal
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int size(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* node=root;
        while(st.size()>0 || node!=NULL){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else { // node==NULL
                TreeNode* temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
            }
        }
        return ans;
    }
};
int main(){
      // Tree structure:
    //             1
    //           /   \
    //         2        3
    //      /   \     /   \
    //     4     5   6     7    

    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);
     a->left=b;
     a->right=c;
     b->left=d;
     b->right=e;
     c->left=f;
     c->right=g;
    Solution sol;
    vector<int> ans=sol.inorderTraversal(a);
    cout << "Inorder traversal: ";
    cout <<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}