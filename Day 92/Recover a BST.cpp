// Recover Binary Search Tree

// You are given the root of a binary search tree (BST), where exactly two nodes of the tree were swapped by mistake. 
// Recover the tree without changing its structure.
// Follow up: A solution using O(n) space is pretty straight forward. Could you devise a constant space solution?


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
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void recoverTree(TreeNode* root) {
        if(root == NULL) return;
        checkLeft(root,root->left);
        checkRight(root,root->right);
        recoverTree(root->left);
        recoverTree(root->right);
    }
    
    void checkLeft(TreeNode *root, TreeNode *rl){
        if(root == NULL or rl == NULL) return;
        if(root->val < rl->val){
            swap(root->val, rl->val);
            checkLeft(root,root->left);
            checkRight(root,root->right);
        }
        else{
            checkLeft(root,rl->left);
            checkLeft(root,rl->right);
        }
    }

    void checkRight(TreeNode *root, TreeNode *rl){
        if(root == NULL or rl == NULL) return;
        if(root->val > rl->val){
            swap(root->val, rl->val);
            checkLeft(root,root->left);
            checkRight(root,root->right);
        }
        else{
            checkRight(root,rl->left);
            checkRight(root,rl->right);
        }
    }
};