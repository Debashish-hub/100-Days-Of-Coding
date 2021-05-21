// Maximum Binary Tree


// You are given an integer array nums with no duplicates. A maximum binary tree can be built recursively from 
// nums using the following algorithm:

// Create a root node whose value is the maximum value in nums.
// Recursively build the left subtree on the subarray prefix to the left of the maximum value.
// Recursively build the right subtree on the subarray suffix to the right of the maximum value.
// Return the maximum binary tree built from nums.


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
    TreeNode* construct(vector<int> &nums, int left, int right){
        if(left > right)
            return nullptr;
        int key = INT_MIN;
        int index = -1;
        for(int i=left; i<=right;i++){
            if(nums[i] > key){
                key=nums[i];
                index=i;
            }
        }
        
        TreeNode *root = new TreeNode(key, construct(nums, left, index-1), construct(nums, index+1, right));
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 1)
            return new TreeNode(nums[0]);
        
        return construct(nums, 0, nums.size()-1);
    }

};