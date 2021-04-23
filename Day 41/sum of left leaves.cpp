// Sum of Left Leaves

// Given the root of a binary tree, return the sum of all left leaves.

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
    int c=0;
    void sum(TreeNode* root)
    {
        if(root)
        {
            sum(root->left);
            if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
                c=c+root->left->val;
            sum(root->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum(root);
        return c;
    }
};