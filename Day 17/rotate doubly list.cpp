// Rotate Doubly List
// After solving quite a few problems of singly linked list, you must be quite confident with it. Let's 
// proceed ahead to solve a question from Doubly Linked List.
// The question is simple but I am not sure of the simplicity of the solution though. You are given a doubly-linked list of size 
// N and an integer K, your task is to rotate the doubly linked list anti-clockwise by K positions.

// Complete the rotateDoublyList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
SinglyLinkedListNode* prev;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head,int k){
//write your code here
  // if(k == 0){
  //   return;
  // }
  struct SinglyLinkedListNode *current = head;
  int c = 1;
  while(c<k && current != NULL){
    current = current->next;
    c++;
  }
  // if(current == NULL){
  //   return;
  // }
  struct SinglyLinkedListNode *nthNode = current;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = head;
  head->prev = current;
  head = nthNode->next;
  head->prev = NULL;
  nthNode->next = NULL;
  return head;
}
