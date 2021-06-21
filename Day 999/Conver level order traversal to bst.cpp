// Convert Level Order Traversal to BST 

// Given an array of size N containing level order traversal of a BST. 
// The task is to complete the function constructBst(), that construct the BST (Binary Search Tree) 
// from its given level order traversal.

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}// } Driver Code Ends


//User function Template for C++
Node* construct(Node *root, int num){
    if(root == NULL){
        Node *temp = new Node(num);
        root = temp;
        return root;
    }
    else if(root->data > num){
        root->left = construct(root->left, num);
    }else if(root->data < num){
        root->right = construct(root->right, num);
    }
    return root;
}

//Function to construct the BST from its given level order traversal.
Node* constructBst(int arr[], int n)
{
    // Code here
    Node *root = NULL;
    for(int i = 0; i<n; i++){
        root = construct(root, arr[i]);
    }
    return root;
}
