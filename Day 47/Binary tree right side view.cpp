// Binary Tree Right Side View

// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you
//  can see ordered from top to bottom.

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
    void solve(TreeNode *root, int level, int *maxLevel, vector<int> &v)
    {
    if(root==NULL)
        return;
    if(level > *maxLevel)
    {
        v.push_back(root->val);
        *maxLevel=level;
    }
        solve(root->right, level+1, maxLevel, v);
        solve(root->left, level+1, maxLevel, v);
    }

    vector<int> rightSideView(TreeNode* root) 
    {
       int maxLevel=0;
       vector<int> v;
       solve(root, 1, &maxLevel, v);
       return v;
    }
};

