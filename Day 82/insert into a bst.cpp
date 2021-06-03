// Insert into a Binary Search Tree

// You are given the root node of a binary search tree (BST) and a value to insert into the tree. 
// Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
// Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after . 
// You can return any of them.

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* current = root;
        TreeNode* parent = NULL;
        
        if(root==NULL)
        {
            root = new TreeNode(val);
        }
    else
    {  
        while(current!=NULL)
        {
            parent = current;
            
            if(val<current->val)
            {
                current = current->left;
            }
            else
            {
                current = current ->right;
            }
            
        }
        
        if(val<parent->val)
        {
            parent->left = new TreeNode(val);
        }
        else
        {
            parent->right = new TreeNode(val);
        }
        
    }   
        return root;
    }
};