// Find the Middle Element
// The best way to master Linked list is to start with basics. Let's solve one such basic question. Given a linked list you 
// have to print the middle element. Finding a middle element in an array is a matter of accessing an element using its 
// index but in this case, you might have to do some linked list traversal.
// Let the number of elements in the list be N. If N is odd simply print the mid element, else print element at (N/2)+1 position.

// Complete the printMidElement function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

void printMidElement(SinglyLinkedListNode *head)
{
//write your code here
  SinglyLinkedListNode* slow = head;
  SinglyLinkedListNode* fast = head;
  
  while(fast != NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
  }
  
  cout<<slow->data<<endl;;
}

