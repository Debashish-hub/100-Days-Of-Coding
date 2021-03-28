// Palindrome List
// You must have already solved a few problems on palindromes by now. You must have checked whether a number is a palindrome 
// or not or a string is a palindrome or not. 
// Now it's time to check whether the given linked list is a palindrome or not.

// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
//write your code here
  SinglyLinkedListNode *slow = head;
  stack <int> s;
  while(slow != NULL){
    s.push(slow->data);
    slow = slow->next;
  }
  while(head != NULL){
    int f = s.top();
    s.pop();
    if(head->data != f){
      return false;
    }
    head = head->next;
  }
  return true;

}
