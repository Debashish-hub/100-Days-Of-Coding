// Path Sum II

// Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where each path's sum equals targetSum.
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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans, left, right; 
        if(root == NULL){
            return ans;
        }        
        int r = root->val;
        if(r == targetSum && root->left == NULL && root->right == NULL){
            ans.push_back(vector<int>(1, r));
            return ans;
        }
        left = pathSum(root->left,targetSum-r);
        right = pathSum(root->right,targetSum-r);
        for(int i=0;i<left.size();i++){
            left[i].insert(left[i].begin(), r);
            ans.push_back(left[i]);
        }
        for(int i=0;i<right.size();i++){
            right[i].insert(right[i].begin(), r);
            ans.push_back(right[i]);
        }        
        return ans;
    }
}; 