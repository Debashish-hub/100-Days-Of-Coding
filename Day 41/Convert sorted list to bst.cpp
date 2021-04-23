// Convert Sorted List to Binary Search Tree

// Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.

// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every 
// node never differ by more than 1.

 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* slow = head; 
        ListNode* fast = head; 

        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next; 
            fast = fast->next->next;
        }
        ListNode* h2 = slow->next;
        TreeNode* tree = new TreeNode();
        tree->val = slow->val;
        
        if(slow == head){
            tree->left = NULL; 
            tree->right = NULL;
            return tree;
        }
        
        ListNode* t = head;
        while(t->next != slow) 
            t=t->next;
        t->next = NULL;
        tree->left = sortedListToBST(head);
        tree->right = sortedListToBST(h2);
        return tree;
    }
};