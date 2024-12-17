// leetcode : 101
// link : https://leetcode.com/problems/symmetric-tree
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
    // Helper function to check if two subtrees are symmetric.
    bool checkSymmetric(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;  // Both subtrees are empty, hence symmetric.
        if (p == NULL || q == NULL) return false; // One subtree is empty and the other is not, not symmetric.
        
        // Recursively check if the current nodes are equal and their corresponding subtrees are mirrors.
        return (p->val == q->val) && 
               checkSymmetric(p->left, q->right) && 
               checkSymmetric(p->right, q->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;  // An empty tree is symmetric.
        
        // Check if the left and right subtrees of the root are mirrors of each other.
        return checkSymmetric(root->left, root->right);
    }
};
int main(){

}