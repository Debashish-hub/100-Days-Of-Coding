// Balanced Binary Tree

// Given a binary tree, determine if it is height-balanced.
// For this problem, a height-balanced binary tree is defined as:
// a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maximum(TreeNode* root, bool &ans){
        if(root==NULL)
            return(0);
        int l = maximum(root->left,ans);
        int r = maximum(root->right,ans);
        if(abs(l-r)>1)
            ans = false;
        return(1+max(l,r));
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        maximum(root,ans);
        return(ans);
    }
};