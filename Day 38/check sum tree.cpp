// Check SumTree
// A SumTree is a Binary Tree where the value of a node is equal to sum of the nodes present in the left subtree and right subtree. 
// You are given a binary tree and the task is to return true (1 in case of C language) if given binary tree is SumTree else return 
// false(0 in case of C language). 

// Note -

// You have to complete checkSumTree() function, no need to implement the tree.
// Consider empty tree as sumTree with sum=0.
// Consider leaf nodes as sumTree.

// Complete the checkSumTree function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/
int sum(struct node *root)
{
    if (root == NULL)
        return 0;
     
    return sum(root->left) + root->value +
           sum(root->right);
}
bool checkSumTree(node* node)
{
    //write your code here
    int ls, rs;
    if (node == NULL ||
       (node->left == NULL &&
        node->right == NULL))
        return 1;
   ls = sum(node->left);
   rs = sum(node->right);
    if ((node->value == ls + rs) &&
          checkSumTree(node->left) &&
          checkSumTree(node->right))
        return 1;
 
   return 0;
    
}
