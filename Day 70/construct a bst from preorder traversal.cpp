// Construct Binary Search Tree from Preorder Traversal

// Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), 
// construct the tree and return its root.
// It is guaranteed that there is always possible to find a binary search tree with the given requirements for the 
// given test cases.
// A binary search tree is a binary tree where for every node, any descendant of Node.left has a value strictly less 
// than Node.val, and any descendant of Node.right has a value strictly greater than Node.val.

// A preorder traversal of a binary tree displays the value of the node first, then traverses Node.left, 
// then traverses Node.right.



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
    TreeNode* helper(vector<int> &preorder, int &id, int limit){
        if(id == preorder.size() || preorder[id] > limit){
            return NULL;
        }
        int r = preorder[id];
        TreeNode* root = new TreeNode(r);
        id++;
        root->left = helper(preorder, id, r);
        root->right = helper(preorder, id, limit);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int id =0;
        return helper(preorder, id, INT_MAX);
    }
};