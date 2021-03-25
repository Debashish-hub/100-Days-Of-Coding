// Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s, *f;
        s = head;
        f = head;
        for(int i=0; i<n; i++){
            f =  f->next;
        }
        if(f != NULL){
            while(f->next != NULL){
                f = f->next;
                s = s->next;
            }
            ListNode *curr;
            curr = s->next;
            s->next = curr->next;
            return head;
        }else{
            return s->next;
        }
        return NULL;
    }
};