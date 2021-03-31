// Check if Linked List is Palindrome 

// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not

// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    //Your code here
    stack<int> d;
    Node *curr = head;
    while(curr != NULL){
        d.push(curr->data);
        curr = curr->next;
    }
    while(head != NULL){
        if(head->data != d.top()){
            return 0;
        }
        d.pop();
        head = head->next;
    }
    return 1;
}

