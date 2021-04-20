// Inorder Traversal
// Given a binary tree, your task is to print the inorder traversal of the tree.

// Note - You have to complete inOrderTraversal() function, no need to implement the tree.

// Complete the inOrderTraversal function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void inOrderTraversal(node *t)
{
    //write your code here;
    if(t != NULL){
      inOrderTraversal(t->left);
      cout<<t->value<<" ";
      inOrderTraversal(t->right);
    }
}
