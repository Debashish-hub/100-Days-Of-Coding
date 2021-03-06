// Merge two sorted linked lists and return it as a sorted list. 
// The list should be made by splicing together the nodes of the first two lists.


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL) 
            return NULL;
        if (l1 == NULL) 
            return l2;
        if (l2 == NULL) 
            return l1;
        
        ListNode *result = NULL, *head;
        if (l1->val < l2->val){
            result = l1;
            l1 = l1->next;
        }else{
            result = l2;
            l2 = l2->next;
        }
        head = result;
        while (l1 != NULL && l2 != NULL){
            if (l1->val < l2->val){
                result->next = l1;
                result = result->next;
                l1 = l1->next;
            }else{
                result->next = l2;
                result = result->next;
                l2 = l2->next;
            }
        }
        if (l1 != NULL) 
            result->next = l1;
        if (l2 != NULL) 
            result->next = l2;
        
        return head;
    }
};