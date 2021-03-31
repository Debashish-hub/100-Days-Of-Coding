// Rearrange a linked list 

// Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and 
// all even positions node are together.
// Assume the first element to be at position 1 followed by second element at position 2 and so on.

// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
    public:
    Node *rearrangeEvenOdd(Node *head)
    {
       // Your Code here
        if(!head || !head->next) 
            return head;

        Node *a=head;
        Node *b=head->next, *bHead=head->next;
        
        while(a && b && a->next && b->next){
            a->next=b->next;
            a=a->next;
            b->next=a->next;
            b=b->next;
        }
        if(b) 
            b->next=NULL;
        a->next=bHead;
        return head;
    }
};


// { Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        head = ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends