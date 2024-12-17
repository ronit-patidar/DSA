// leetcode : 236
// link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree
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
    bool exists(TreeNode* root, TreeNode* target) {
        if (root == NULL) return false;
        if (root == target) return true;
        // Recursively check left and right subtrees
        // either it is in left or in right
        return exists(root->left, target) || exists(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) return root;
        bool pInLeft = exists(root->left, p);
        bool qInRight = exists(root->right, q);
        bool pInRight = exists(root->right, p);
        bool qInLeft = exists(root->left, q);
        if (pInLeft && qInRight || (pInRight && qInLeft)) return root;
        if (pInLeft && qInLeft) {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if (pInRight && pInRight) {
            return lowestCommonAncestor(root->right, p, q);
        }
        // If none of the above cases, return the current root
        return root;
    }
};
int main(){

}