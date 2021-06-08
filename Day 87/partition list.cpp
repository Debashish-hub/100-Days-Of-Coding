// Partition List

// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes 
// greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.


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
    ListNode* partition(ListNode* head, int x) {
        ListNode *before = new ListNode(0);
        ListNode *b = before;
        ListNode *after = new ListNode();
        ListNode *a = after;
        while(head != NULL){
            if(head->val >= x){
                a->next = head;
                a= a->next;
            }else{
                b->next = head;
                b = b->next;
            }
            head = head->next;
        }
        a->next = NULL;
        b->next = after->next;
        return before->next;
    }
};