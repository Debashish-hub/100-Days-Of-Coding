//  Construct Tree from Inorder & Preorder 
 
// Given 2 Arrays of Inorder and preorder traversal. Construct a tree and print the Postorder traversal. 

// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int search(int in[], int k, int n){
        for(int i=0; i<n; i++){
            if(in[i] == k)
                return i;
        }
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        if(n == 0)
            return NULL;
        Node *temp = new Node(pre[0]);
        int i = search(in, pre[0], n);
        temp->left = buildTree(in, pre+1, i);
        temp->right = buildTree(in+i+1, pre+i+1, n-i-1);
        return temp;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends