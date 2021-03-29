// Reverse in a group
// This is another reverse the list problem. You must be thinking, "Its easy , I have already Done it!" But wait, there is a twist.
// You have to reverse the list in a group of K nodes.
// If the list is HEAD->2->3->7->4->1->6->NULL and K is 3, your modified list should be HEAD->7->3->2->6->1->4->NULL.

// Complete the reverseKnodes function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/
SinglyLinkedListNode *reverseKnodes(SinglyLinkedListNode *head,int k){
//write your code here
  SinglyLinkedListNode *current = head, *next = NULL, *prev = NULL;
  int count = 0;
  while(current != NULL && count < k){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
  }
  if (next != NULL)
        head->next = reverseKnodes(next, k);
 
    
  return prev;

}

