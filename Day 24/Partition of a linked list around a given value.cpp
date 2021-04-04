// Partition a Linked List around a given value 
// Medium Accuracy: 74.95% Submissions: 741 Points: 4
// Given a linked list and a value x, partition it such that all nodes less than x come first, then all nodes 
// with value equal to x and finally nodes with value greater than or equal to x. The original relative order of the 
// nodes in each of the three partitions should be preserved. The partition must work in-place.

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
    Node * curr = head;
    vector <int> v;
    while(curr){
        v.push_back(curr->data);
        curr = curr->next;
    }
    for(int i=0; i< v.size(); i++){
        if(v[i] < x){
            cout<<v[i]<<" ";
        }
    }
    for(int i=0; i< v.size(); i++){
        if(v[i] == x){
            cout<<v[i]<<" ";
        }
    }
    for(int i=0; i< v.size(); i++){
        if(v[i] > x){
            cout<<v[i]<<" ";
        }
    }
    return NULL;
}