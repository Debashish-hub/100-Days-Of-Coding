// Maximum Distinct
// Tina is stuck in a maze that from bird-eye view looks like a binary tree, i.e each checkpoint has two ways to choose from left 
// and right. And each checkpoint is denoted by an integer. She is at the beginning and each path at the end has a door locked with 
// a password. The password is the count of distinct integer she found at the checkpoints in the path. The door will only be unlocked 
// if she chooses the path with the maximum number of distinct integers and enters their count. Help Tina find the correct path.

// Note - You have to complete findDistinctCount() function, no need to implement the tree.

// Complete the findDistinctCount function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/


int largest(node* node, unordered_map<int, int> m)
{
    if (!node)
        return m.size();
    m[node->value]++;
  
    int max_path = max(largest(node->left, m), largest(node->right, m));
    m[node->value]--;
    if (m[node->value] == 0)
        m.erase(node->value);
  
    return max_path;
}


int findDistinctCount(node* node)
{
    //write your code here
    if (!node)
        return 0;
    unordered_map<int, int> m;

    return largest(node, m);
}
