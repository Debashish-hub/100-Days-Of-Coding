// Student Marks
// You are given a binary tree, you need to print the average of each level of the tree.

// Note - You have to complete findAverageLevel() function, no need to implement the tree.

// Complete the findAverageLevel function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void findAverageLevel(node* root)
{
    //write your code here
    vector<float> res;
    queue<node*> q;
    q.push(root);
  
    while (!q.empty()) {
        float sum = 0.00, count = 0.00;
        queue<node*> temp;
        while (!q.empty()) {
            node* n = q.front();
            q.pop();
            sum += n->value;
            count++;
            if (n->left != NULL)
                temp.push(n->left);
            if (n->right != NULL)
                temp.push(n->right);
        }
        q = temp;
        cout <<fixed<<setprecision(2)<< (sum  / count) << " ";
    }
}
