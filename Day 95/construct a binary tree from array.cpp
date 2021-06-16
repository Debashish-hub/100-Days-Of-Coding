// Construct Binary Tree from Parent Array 

// Given an array of size N that can be used to represents a tree. The array indexes are values in tree 
// nodes and array values give the parent node of that particular index (or node). The value of the root 
// node index would always be -1 as there is no parent for root. Construct the standard linked representation 
// of Binary Tree from this array representation.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void sort_and_print(vector <int> &v)
{
    sort( v.begin() , v.end() );
    for( int i=0 ; i<v.size() ; i++ )
        cout<< v[i] << " ";
    v.clear();
}

void printLevelOrder(struct Node* root)
{
    vector <int> v;
    queue <Node*> q;
    
    q.push(root);
    
    Node* next_row = NULL;
    
    while(!q.empty())
    {
        Node* n = q.front();
        q.pop();
        
        if(n==next_row)
        {
            sort_and_print(v);
            next_row = NULL;
        }
        
        v.push_back(n->data);
        
        if(n->left)
        {
            q.push(n->left);
            if(next_row == NULL) next_row = n->left;
        }
        
        if(n->right)
        {
            q.push(n->right);
            if(next_row == NULL) next_row = n->right;
        }
    }
    sort_and_print(v);
}

Node *createTree(int parent[], int n);

/* Driver program to test above function*/
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for( int i=0 ; i<n ; i++ )
            cin>> a[i];
        
        struct Node *res = createTree(a,n);
        
        printLevelOrder(res);
        cout<<endl;
    }

    return 0;
}

// } Driver Code Ends


/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to construct binary tree from parent array.
Node *createTree(int parent[], int N)
{
    // Your code here
    vector<Node*> v;
    for(int i=0; i<N; i++){
        Node *temp = new Node(i);
        v.push_back(temp);
    }
    int root;
    for(int i=0; i<N; i++){
        if(parent[i] == -1){
            root = i;
        }
        if(parent[i] != -1 && !v[parent[i]]->left){
            v[parent[i]]->left = v[i];
        }
        else if(parent[i] != -1 && !v[parent[i]]->right){
            v[parent[i]]->right = v[i];
        }
    }
    return v[root];
}










