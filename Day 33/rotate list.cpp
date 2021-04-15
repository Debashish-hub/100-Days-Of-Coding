// Rotate List

// Given the head of a linked list, rotate the list to the right by k places.

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode* temp = head,*ans = head;
        int size=1;
        while(head->next){ 
            head=head->next;
            size++;
        }
        head->next=temp;
        k=k%size;
        k=size-k-1;
        while(k>0){
            ans=ans->next;
            k--;
        }
        temp = ans;
        ans=ans->next;
        temp->next=NULL;
        return ans;
    }
};