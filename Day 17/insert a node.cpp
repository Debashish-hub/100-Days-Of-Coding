// Insert a Node
// Inserting an element in between the elements in an array requires you to shift the elements to the left but in Linked 
// list it is just about modifying few links. Let's practice inserting a node in a linked list, but there is a rule:
// You are given a sorted(ascending order) linked list and you have to insert a node in the list in a sorted manner.
// For example - if the given list is 
// HEAD->2->3->6->8->NULL and you have to insert 4, you will insert it after 3 and your modified list will look something like this 
// HEAD->2->3->4->6->8->NULL.

// Note - You only need to implement insertSortedNode(), and return the head of the modified linked list.

// Complete the insertSortedNode function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
// SinglyLinkedListNode(int data){
//     SinglyLinkedListNode* ptr = new SinglyLinkedListNode();
  
//     /* put in the data */
//     ptr->data = value;
//     ptr->next = NULL;
  
//     return ptr;
// }

SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head,int value){
  //write your code here
  SinglyLinkedListNode*newNode = new SinglyLinkedListNode(value);
  if(head == NULL || head->data >= value){
      newNode->next = head;
      head = newNode;
  }
  else{
      SinglyLinkedListNode*temp = head;
      while(temp->next != NULL && temp->next->data < value){
          temp = temp->next;
      }
      newNode->next = temp->next;
      temp->next = newNode;
  }
  return head;
}
