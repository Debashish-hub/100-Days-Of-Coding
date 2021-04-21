// Maximum Turns
// Tina is stuck in a maze that from bird-eye view looks like a binary tree, i.e each checkpoint has two ways to choose 
// from left and right. And each checkpoint is denoted by an integer. She is at the beginning and each path at the end has 
// a door locked with a password. The password is the count of turns she needed to make to reach the end. Turn here indicates 
// the switching from left to right and vice-versa while traversing. Help Tina find the correct path.
// For example:
// RRLL    =1 turn
// RRLRL   =3 turns
// LRLRL   =4 turns

// Note - You have to complete findTurnCount() function, no need to implement the tree.

// Complete the findTurnCount function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/
void findMaxBendsUtil(node* node,char dir, int bends,int* maxBends, int soFar,int* len)
{
    // Base Case
    if (node == NULL)
        return;
    if (node->left == NULL && node->right == NULL) {
        if (bends > *maxBends) {
            *maxBends = bends;
            *len = soFar;
        }
    }
    else {
        if (dir == 'l') {
            findMaxBendsUtil(node->left, dir, bends, maxBends, soFar + 1, len);
            findMaxBendsUtil(node->right, 'r',  bends + 1, maxBends, soFar + 1, len);
        }
        else {
            findMaxBendsUtil(node->right, dir, bends, maxBends, soFar + 1, len);
            findMaxBendsUtil(node->left, 'l', bends + 1, maxBends, soFar + 1, len);
        }
    }
}
int findTurnCount(node* node)
{
    //write your code here
    if (node == NULL)
        return 0;
 
    int len = 0, bends = 0, maxBends = -1;
    if (node->left)
        findMaxBendsUtil(node->left, 'l', bends, &maxBends, 1, &len);
    if (node->right)
        findMaxBendsUtil(node->right, 'r', bends, &maxBends, 1, &len);
    len++;
 
    return maxBends;
}
