// Postorder Traversal
// Given a binary tree, your task is to print the postorder traversal of the tree.

// Note - You have to complete postOrderTraversal() function, no need to implement the tree.

/* Complete the function postOrderTraversal given below.
For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void postOrderTraversal(node *t)
{
    //write your code here;
    if(t != NULL){
      postOrderTraversal(t->left);
      postOrderTraversal(t->right);
      cout<<t->value<<" ";
    }
}
