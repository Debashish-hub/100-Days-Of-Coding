// Minimum Distance Between BST Nodes

// Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.


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
    int minimum = INT_MAX, cur = -1;
    int minDiffInBST(TreeNode* root) {
        if(root){
            minDiffInBST(root->left);
            if(cur != -1)
                minimum = min(minimum, abs(cur- root->val));
            if(root->val > cur)
                cur = root->val;
            minDiffInBST(root->right);
        }
        return minimum;
    }
};

