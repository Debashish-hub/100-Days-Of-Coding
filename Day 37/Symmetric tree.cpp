// Symmetric Tree

// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

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
    bool travel(TreeNode* l, TreeNode* r){
        bool res = true;
        if(l == NULL && r == NULL)
            return true;
        if(l == NULL || r == NULL)
            return false;
        if(l->val == r->val){
            res = res && travel(l->left, r->right);
            res = res && travel(l->right, r->left);
        }else{
            res = false;
        }
        return res;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* l;
        TreeNode* r;
        l = root->left;
        r = root->right;
        return travel(l,r);
    }
};


