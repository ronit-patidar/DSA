// leetcode : 226
// link : https://leetcode.com/problems/invert-binary-tree
#include<iostream>
#include<climits>
#include<algorithm>
#include<cmath>
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
class Solution{
    public:
    void helper(TreeNode* root){
        if(root==NULL) return ;
        swap(root->left,root->right);
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root){
      helper(root);
      return root;
    }
};
int main(){

}