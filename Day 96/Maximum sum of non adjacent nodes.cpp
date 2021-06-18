//  Maximum sum of Non-adjacent nodes 

// Given a binary tree with a value associated with each node, we need to choose a subset of 
// these nodes such that sum of chosen nodes is maximum under a constraint that no two chosen 
// node in subset should be directly connected that is, if we have taken a node in our sum then 
// we can’t take its any children in consideration and vice versa.


// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
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
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

int getMaxSum(Node* root);

 // } Driver Code Ends
//User function Template for C++

//Node Structure
/*struct Node
{
	int key;
	Node *left, *right;
};*/
unordered_map<Node*,int> a;
//Function to return the maximum sum of non-adjacent nodes.
int getMaxSum(Node *root) 
{
    // Add your code here
    if(root == NULL)return NULL;
    
    if(a[root]) return a[root];
    
    int inc = root->data;
    if(root->left){
        inc += getMaxSum(root->left->left);
        inc += getMaxSum(root->left->right);
    }
    if(root->right){
        inc += getMaxSum(root->right->left);
        inc += getMaxSum(root->right->right);
    }
    
    int exc = getMaxSum(root->left) + getMaxSum(root->right);
    
    a[root] = max(inc, exc);
    return a[root];
}

// { Driver Code Starts.
// Driver code 
int main()
{
  int t;
  scanf("%d ",&t);
  while (t--)
  {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
        cout<<getMaxSum(root)<<endl;
  }
  return 0;
}  // } Driver Code Ends