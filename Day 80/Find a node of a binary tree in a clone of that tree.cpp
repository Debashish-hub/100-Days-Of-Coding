// Find a Corresponding Node of a Binary Tree in a Clone of That Tree

// Given two binary trees original and cloned and given a reference to a node target in the original tree.
// The cloned tree is a copy of the original tree.
// Return a reference to the same node in the cloned tree.
// Note that you are not allowed to change any of the two trees or the target node and the answer must be a 
// reference to a node in the cloned tree.
// Follow up: Solve the problem if repeated values on the tree are allowed.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original)
            return NULL;
        if(original == target) 
            return cloned;
        
        TreeNode* left = getTargetCopy(original->left,cloned->left,target);
        TreeNode* right = getTargetCopy(original->right,cloned->right,target);
        
        target=original=cloned=NULL;
        return (left!=NULL) ? left : right;
    }
};