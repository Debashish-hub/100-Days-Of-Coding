//  Delete Node in a BST

// Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node 
// reference (possibly updated) of the BST.

// Basically, the deletion can be divided into two stages:

// Search for a node to remove.
// If the node is found, delete the node.
// Follow up: Can you solve it with time complexity O(height of tree)?

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
    TreeNode* minval(TreeNode* root){
        while(root->left != NULL)
            root = root->left;
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL;
        if(key < root->val)
            root->left =  deleteNode(root->left, key);
        else if(key > root->val)
            root->right =  deleteNode(root->right, key);
        else{
            if(root->right==NULL && root->left==NULL)
                return NULL;
            else if(root->right && root->left==NULL)
            {
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }
            else if(root->left && root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete(root);
                return temp;
            }
            TreeNode* temp=minval(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
}; 