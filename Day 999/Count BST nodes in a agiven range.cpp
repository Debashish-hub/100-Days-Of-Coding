// Count BST nodes that lie in a given range 

// Given a Binary Search Tree (BST) and a range l-h(inclusive), count the number of nodes in the 
// BST that lie in the given range.

// The values smaller than root go to the left side
// The values greater and equal to the root go to the right side


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node* root = newNode(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current node
			currNode->left = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}


int getCount(Node *root, int low, int high);
int main()
{
	
	int t;
	scanf("%d ", &t);
	while (t--)
	{
		string s;
		getline(cin >> ws, s);
		int l, r;
		cin >> l >> r;
		
		Node* root = buildTree(s);
		cout << getCount(root, l, r) << endl;
		
	}
	return 1;
}
// } Driver Code Ends




void count(Node *root, int l, int h, int *res){
    if(root == NULL){
        return ;
    }
    if(root->data >= l && root->data <= h){
        *res += 1;
    }
    count(root->left,l,h,res);
    count(root->right,l,h,res);
    
    
}
//Function to count number of nodes in BST that lie in the given range.
int getCount(Node *root, int l, int h)
{
  // your code goes here   
  int res = 0;
  count(root, l, h, &res);
  return res;
}
