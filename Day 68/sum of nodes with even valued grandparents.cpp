// Sum of Nodes with Even-Valued Grandparent

// Given a binary tree, return the sum of values of nodes with even-valued grandparent.  (A grandparent of a node is the 
// parent of its parent, if it exists.)

// If there are no nodes with an even-valued grandparent, return 0.


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
    void preorder(TreeNode* root, int& sum){
        if(root == NULL)return;
        
        if(root->val % 2 == 0){
            if(root->left){
                if(root->left->left)
                    sum += root->left->left->val;
                if(root->left->right)
                    sum += root->left->right->val;
            }
            if(root->right){
                if(root->right->left)
                    sum += root->right->left->val;
                if(root->right->right)
                    sum += root->right->right->val;
            }
        }
        preorder(root->left, sum);
        preorder(root->right, sum);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        preorder(root , sum);
        return sum;
    }
};