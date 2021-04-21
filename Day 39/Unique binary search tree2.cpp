// Unique Binary Search Trees II

// Given an integer n, return all the structurally unique BST's (binary search trees), which has exactly n nodes of 
// unique values from 1 to n. Return the answer in any order.

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
    vector<TreeNode *>helper(int s,int e){
        if(s>e){
            return {NULL};
        }
        if(s==e){
            TreeNode *node=new TreeNode(s);
            return {node};
        }
        vector<TreeNode *>ans;
        for(int i=s;i<=e;i++){
            auto left=helper(s,i-1),right=helper(i+1,e);
            for(auto l:left){
                for(auto r:right){
                    TreeNode *root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) 
    {
        return helper(1,n);
    }
};