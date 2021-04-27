// Range Sum of BST

// Given the root node of a binary search tree, return the sum of values of all nodes with a value in the range [low, high].

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
    void postorder(TreeNode* root, int low, int high, int& sum){
        if(root == NULL)
            return;
        postorder(root->left, low, high, sum);
        if(root->val >= low && root->val <= high)
            sum += root->val;
        postorder(root->right, low, high, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        postorder(root, low, high, sum);
        return sum;
    }
};