// Add One to the Number
// You are given a linked list representing a number such that each individual node acts as a digit of the number. The list 
// HEAD->1->2->3->NULL corresponds to the number 123. Your task is to add 1 to this number.

// Complete the addOneToList function below.

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
    SinglyLinkedListNode *prep = NULL;
    SinglyLinkedListNode *link = NULL;
    SinglyLinkedListNode *temp = head;
    while(temp!=  NULL){
      link = temp->next;
      temp->next = prep;
      prep = temp;
      temp = link;
    }
    head = prep;
    return head;
}
SinglyLinkedListNode *addOneToList(SinglyLinkedListNode *head){
  SinglyLinkedListNode *newNode = new SinglyLinkedListNode(1);
  head = reverseLinkedList(head);
  SinglyLinkedListNode *temp = head;
  head->data += 1;
  while(temp != NULL){
      if(temp->data >= 10){
        temp->data -= 10;
           if(temp->next != NULL){
              temp->next->data += 1;
              temp = temp->next;
           }
           else{
            temp->next = newNode;
             break;
           }
      }
    else{
          break;
      }
  }
  head = reverseLinkedList(head);
  return head;
}

