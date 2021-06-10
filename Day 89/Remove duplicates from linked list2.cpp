// Remove Duplicates from Sorted List II

// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, 
// leaving only distinct numbers from the original list. Return the linked list sorted as well.


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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
           return head;
       }
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(temp->val==curr->val){
                while(temp!=NULL && temp->val==curr->val ){
                    curr=curr->next;
                    temp=temp->next;
                }
                if(temp==NULL){
                    if(prev==NULL){
                        head=NULL;
                    }
                    else{
                        prev->next=NULL;
                    }
                }else{
                    if(prev==NULL){
                        prev=NULL;
                        head=temp;
                    }else{
                        prev->next=temp;
                    }
                    
                    curr=temp;
                    temp=temp->next;
                }
            }else{
                prev=curr;
                
                curr=temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};