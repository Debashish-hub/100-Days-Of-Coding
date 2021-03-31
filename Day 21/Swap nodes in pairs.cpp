// Swap Nodes in Pairs

// Given a linked list, swap every two adjacent nodes and return its head.

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        ListNode* f = head;
        ListNode* s = head->next;
        ListNode* sn = s->next;
        while(f != NULL && s != NULL){
            s->next = f;
            f->next = sn;
            dummy->next=s;
            dummy=dummy->next->next;
            
            if(sn==NULL || sn->next==NULL)
                break;
            f=sn;
            s=f->next;
            sn=s->next;
        }
        return ans->next;
    }
};


