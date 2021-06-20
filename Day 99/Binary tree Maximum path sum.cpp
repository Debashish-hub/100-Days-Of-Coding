// Binary Tree Maximum Path Sum

// A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence 
// has an edge connecting them. A node can only appear in the sequence at most once. Note that the 
// path does not need to pass through the root.

// The path sum of a path is the sum of the node's values in the path.
// Given the root of a binary tree, return the maximum path sum of any path.

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
    int solve(TreeNode* root , int &maxSum){
        if(!root)
            return 0;
        int l = max(solve(root->left, maxSum), 0);
        int r = max(solve(root->right, maxSum), 0);
        maxSum = max(maxSum , (root->val + l + r));
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        solve(root, maxSum);
        return maxSum;
    }

};

