// Reverse List Between Range
// You are given a linked list consisting of N nodes. You are also given two integers l and r. 
// Your task is to reverse the nodes between the range l to r (inclusive).

// Complete the reverseInRange function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
struct SinglyLinkedListNode* reverse(struct SinglyLinkedListNode* head){
    struct SinglyLinkedListNode* prev = NULL;   
    struct SinglyLinkedListNode* curr = head;
 
    while (curr) {
        struct SinglyLinkedListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
SinglyLinkedListNode *reverseInRange(SinglyLinkedListNode *head, int m, int n){
//write your code here
    SinglyLinkedListNode* revs = NULL, *revs_prev = NULL;
    SinglyLinkedListNode* revend = NULL, *revend_next = NULL;
    int i = 1;
    SinglyLinkedListNode* curr = head;
    while (curr && i <= n) {
        if (i < m)
            revs_prev = curr;
 
        if (i == m)
            revs = curr;
 
        if (i == n) {
            revend = curr;
            revend_next = curr->next;
        }
 
        curr = curr->next;
        i++;
    }
    revend->next = NULL;
    revend = reverse(revs);
    if (revs_prev)
        revs_prev->next = revend;
    else
        head = revend;
    revs->next = revend_next;
    return head;
}

