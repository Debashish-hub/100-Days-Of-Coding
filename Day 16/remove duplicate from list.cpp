// Remove Duplicate From The List
// You are given a sorted(ascending order) list which may or may not contain duplicate elements. 
// Your task is to remove the duplicacy from the list. So basically if two 
// 4's are present in the list then you have to modify the list such that only one 4 remains.

// Complete the removeDuplicates function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };

To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*
*/
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
//write your code here
  struct SinglyLinkedListNode *temp = head;
  struct SinglyLinkedListNode *ptr ;
  while(temp->next != NULL){
    
    if(temp->data == temp->next->data){
      ptr = temp->next->next;
      free(temp->next);
      temp->next = ptr;
    }else{
      temp = temp->next;
    }
    
  }
  return head;

}

