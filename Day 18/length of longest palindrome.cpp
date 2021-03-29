// Length of longest palindrome
// You are given a linked list consisting of N nodes. your task is to find the length of the longest palindrome in the linked list.

// Note:- Expected space complexity O(1).

// Complete the longestPalindrome function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
int countCommon(SinglyLinkedListNode *a, SinglyLinkedListNode *b)
{
    int count = 0;
    for (; a && b; a = a->next, b = b->next)
        if (a->data == b->data)
            ++count;
        else
            break;
    return count;
}
int longestPalindrome(SinglyLinkedListNode *head){
//write your code here
  int res = 0;
  SinglyLinkedListNode *prev = NULL, *curr = head;
  while(curr){
    SinglyLinkedListNode *next = curr->next;
    curr->next = prev;
    res = max(res, 2*countCommon(prev,next) + 1);
    res = max(res, 2*countCommon(curr,next));
    prev = curr;
    curr = next;
  }
  return res;
}

