// leetcode : 100
// link : https://leetcode.com/problems/same-tree
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
class Solution {
public:
    // Function to determine if two binary trees are the same
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are NULL, both trees are empty, so they are identical
        if (p == NULL && q == NULL) return true;
        
        // If one node is NULL and the other is not, trees are not identical
        if (p == NULL || q == NULL) return false;

        // If the values of the current nodes are different, trees are not identical
        if (p->val != q->val) return false;

        // Recursively check if the left subtrees are identical
        bool leftans = isSameTree(p->left, q->left);
        if (leftans == false) return false; // If left subtrees aren't identical, return false

        // Recursively check if the right subtrees are identical
        bool rightans = isSameTree(p->right, q->right);
        if (rightans == false) return false; // If right subtrees aren't identical, return false

        // If both left and right subtrees are identical, return true
        return true;
    }
};
int main(){

}