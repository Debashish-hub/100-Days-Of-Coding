// Preorder Traversal
// Given a binary tree, your task is to print the preorder traversal of the tree.

// Note - You have to complete preOrderTraversal() function, no need to implement the tree.

// Complete the preOrderTraversal function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void preOrderTraversal(node *t)
{
    //write your code here;
    if(t != NULL){
      cout<<t->value<<" ";
      preOrderTraversal(t->left);
      preOrderTraversal(t->right);
    }
    
}
