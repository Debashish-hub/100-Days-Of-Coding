// Reverse a Linked List
// Next question will test how comfortable you are with Linked Lists. The problem statement is simple "Reverse a singly linked list".

// Complete the reverseLinkedList function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
//write your code here
  if(head==NULL||head->next==NULL)return head;
    SinglyLinkedListNode* restlist = reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
     return restlist;
}
