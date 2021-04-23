// Validate Binary Search Tree

// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

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
    bool bst(TreeNode* node, TreeNode* min, TreeNode* max) {
        if (node == nullptr) {
            return true;
        }
        
        if ((min && node->val <= min->val) || (max && node->val >= max->val)) {
            return false;
        }

        return bst(node->left, min, node) && bst(node->right, node, max);
    }

    bool isValidBST(TreeNode* root) {
        return bst(root, nullptr, nullptr);
    }
};