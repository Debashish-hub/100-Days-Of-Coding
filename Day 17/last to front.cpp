// Last to Front
// Many Linked List problems are about manipulating links between the nodes, better you 
// understand the links easier it becomes for you to solve Linked List problems.

// Keeping that in mind, you are given a linked list containing N elements, your task is to bring the last node to the front. 
// If your list looks something like this HEAD->1->2->3->4->NULL, you have to transform it to HEAD->4->1->2->3->NULL.
// Note - You only need to implement lastElementFirst() method, and return the head of the modified linked list.

// Complete the lastElementFirst function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *lastElementFirst(SinglyLinkedListNode *head)
{
 if(head->next == nullptr){
   return head;
 }
  SinglyLinkedListNode*temp = head;
  SinglyLinkedListNode*temp1 = head;
  while(temp->next != nullptr){
    temp = temp->next;
  }
  while(temp1->next->next != nullptr){
    temp1 = temp1->next;
  }
  temp->next = head;
  head = temp;
  temp1->next = nullptr;
  return head;
}

