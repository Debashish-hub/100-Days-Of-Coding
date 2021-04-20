// Search in Binary Search Tree
// Given a binary search tree and a key, return the node if it exist in the tree, else return NULL.

// Note - You have to complete searchInBST() function, no need to implement the tree.

// Complete the searchInBST function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

struct node* searchInBST(node* t,int key)
{
    //write your code here
    if(t == NULL)
      return NULL;
    if(key > t->value)
      return searchInBST(t->right, key);
    else if(key < t->value)
      return searchInBST(t->left, key);
    return t;
}
