// leetcode : 110
// link : https://leetcode.com/problems/balanced-binary-tree
#include<iostream>
#include<vector>
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
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    int height(TreeNode* root){
        return levels(root) - 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int hl = height(root->left);
        int hr = height(root->right);

        // Check if the current node is balanced
        int bf = abs(hl-hr);  // balance factor
        if(bf > 1) return false;

        // Recursively check if the left and right subtrees are balanced
        // if bf of single node is differ by more than 1 then it cant be balanced
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
int main(){

}