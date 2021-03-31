// Reverse Nodes in k-Group
// Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// Follow up:

// Could you solve the problem in O(1) extra memory space?
// You may not alter the values in the list's nodes, only nodes itself may be changed.

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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
                 
        for(int i = 0; i < k; i++) {
            if(temp == NULL) return head;
            temp = temp->next;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int count = 0;
        
        while(curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next) {
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }
};