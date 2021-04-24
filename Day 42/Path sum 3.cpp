// Path Sum III

// Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of the values along 
// the path equals targetSum.

// The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from 
// parent nodes to child nodes).

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
    int pathSum(TreeNode* root, int sum) {
        unordered_map<int, int> m;
        m[0] = 1;
        int count = 0;
        pathSumRecur(root, sum, 0, count, m);
        return count;
    }

    void pathSumRecur(TreeNode* root, int sum, int curSum, int& count, unordered_map<int, int>& m){
        if(!root)
            return;
        curSum += root->val;
        if(m.find(curSum-sum) != m.end()){
            count += m[curSum-sum];
        }
        m[curSum]++;
        pathSumRecur(root->left, sum, curSum, count, m);
        pathSumRecur(root->right, sum, curSum, count, m);
        m[curSum]--;
    }
};