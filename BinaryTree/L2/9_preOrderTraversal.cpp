// leetcode : 144 
// link : https://leetcode.com/problems/binary-tree-preorder-traversal
// DFS
#include<iostream>
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
    void helper(TreeNode* root,vector<int>& ans){
        if(root==NULL) return ; // base call
        ans.push_back(root->val); // root
        helper(root->left,ans); // left
        helper(root->right,ans); // right
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
int main(){
    
}