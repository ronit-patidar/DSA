#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class TreeNode{ // This is tree node at LEETCODE
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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
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
    
}