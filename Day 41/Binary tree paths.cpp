// Binary Tree Paths

// Given the root of a binary tree, return all root-to-leaf paths in any order.
// A leaf is a node with no children.

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
    vector<string> v;
    
    void allpaths(TreeNode* root, string s){
        
        if(!root)
            return;
        if(!root->left && !root->right){
            s+=to_string(root->val);
            v.push_back(s);
            return;
        }
        s=s+to_string(root->val)+"->";
        allpaths(root->left,s);
        allpaths(root->right,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        allpaths(root,"");
        return v;
    }
};