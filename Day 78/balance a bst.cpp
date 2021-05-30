// Balance a Binary Search Tree

// Given a binary search tree, return a balanced binary search tree with the same node values.
// A binary search tree is balanced if and only if the depth of the two subtrees of every node never differ by more than 1.
// If there is more than one answer, return any of them.

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
    vector<int> _orders;
    void LNR(TreeNode* r) {
        if(!r)
            return;
        LNR(r->left);
        _orders.push_back(r->val);
        LNR(r->right);
    }
    
    TreeNode* bldTree(int s, int e) {
        auto m = (s+e)/2;
        auto r = new TreeNode(_orders[m]);
        if(s<m)
            r->left = bldTree(s, m-1);
        if(m<e)
            r->right = bldTree(m+1, e);
        return r;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        _orders.clear();
        LNR(root);
        return bldTree(0, _orders.size()-1);
    }
};