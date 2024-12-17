// leetcode : 145
// link : https://leetcode.com/problems/binary-tree-postorder-traversal
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
        helper(root->left,ans); // left
        helper(root->right,ans); // right
        ans.push_back(root->val); // root
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};int main(){
    
}