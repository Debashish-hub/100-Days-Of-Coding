// Ancestors
// PrepBuddy is researching about different kinds of mammals and their ancestors. He has assigned a unique integer number to each 
// mammal and has arranged them in a binary search tree format. He needs your help to create a program that outputs lowest common 
// ancestor of two mammals.

// Note -

// You have to complete findLowestAncestor() function, no need to implement the tree.
// Lowest common ancestor of two node n1 and n2 is the lowest node in the tree that has both n1 and n2 as descendents(where we 
// allow a node to be a descendant of itself).

// Complete the findLowestAncestor function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

node* findLowestAncestor(node* root,int v1, int v2)
{
    //write your code 
    if(root == NULL)
      return root;
    if(root->value == v1 || root->value == v2)
      return root;
    node *l = findLowestAncestor(root->left,v1,v2);
    node *r = findLowestAncestor(root->right,v1,v2);
    
    if(l && r)
      return root;
    return (l!=NULL)?l:r;
}
