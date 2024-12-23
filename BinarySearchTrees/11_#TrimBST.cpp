// leetcode : 669. Trim a Binary Search Tree
// link : https://leetcode.com/problems/trim-a-binary-search-tree/
#include<iostream>      
#include<climits>      
#include<cmath>      
using namespace std;   
class TreeNode {
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
    void helper(TreeNode* root, int lo, int hi){
        if(root==NULL) return ;
        while(root->left){
           if(root->left->val < lo){
              root->left=root->left->right;
           }
           else if(root->left->val > hi){
              root->left=root->left->left;
           }
           else break;
        }
        while(root->right){
           if(root->right->val < lo){
              root->right=root->right->right;
           }
           else if(root->right->val > hi){
              root->right=root->right->left;
           }
           else break;
        }
        helper(root->left,lo,hi);
        helper(root->right,lo,hi);
    }
    TreeNode* trimBST(TreeNode* root, int lo, int hi) {
        TreeNode* dummy=new TreeNode(INT_MAX);
        dummy->left=root;
        helper(dummy,lo,hi);
        return dummy->left;
    }
};
int main(){

}