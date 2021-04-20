// LevelOrder Traversal
// Given a binary tree, your task is to print the level order traversal of the tree.

// Note - You have to complete levelOrderTraversal() function, no need to implement the tree.

// Complete the levelOrderTraversal function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/
void printGivenLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->value << " ";
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

int height(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        /* use the larger one */
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}
void levelOrderTraversal(node *t)
{
    //write your code here;
    int h = height(t);
    int i;
    for (i = 1; i <= h; i++)
        printGivenLevel(t, i);
}
