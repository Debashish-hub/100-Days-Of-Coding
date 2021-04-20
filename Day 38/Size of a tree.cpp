// Size of Tree
// Given a binary tree, your task is to print the size of the tree.
// Size of tree represented as the number of nodes in the given tree.

// Note - You have to complete calculateSize() function, no need to implement the tree.

// Complete the calculateSize function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int calculateSize(node* node)
{
    //write your code here
    if(node == NULL){
      return 0;
    }else{
      return (calculateSize(node->left) + calculateSize(node->right) + 1);
    }
}
