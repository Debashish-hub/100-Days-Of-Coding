// Convert SumTree
// A SumTree is a Binary Tree where the value of a node is equal to sum of the nodes present in the left subtree and right subtree. 
// You are given a binary tree and the task is to covert that tree into SumTree. 

// Note -

// You have to complete convertSumTree() function, no need to implement the tree.
// Consider empty tree as sumTree with sum=0.
// Consider leaf nodes as sumTree.

// Complete the convertToSumTree function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/

int convertToSumTree(node *node)
{
    //write your code here
    if(node == NULL)
      return 0;
    int old = node->value;
    node->value = convertToSumTree(node->left) + convertToSumTree(node->right);
    return node->value + old;
}
