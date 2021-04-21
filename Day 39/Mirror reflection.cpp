// Mirror Reflection
// PrepBuddy has always been fascinated by how any word/image seems inverted in the mirror. He has a pair of trees and wants 
// to know whether one tree in the pair is the mirror image of another tree in the given pair.

// Note - You have to complete checkMirrorTree() function, no need to implement the tree.

// Complete the checkMirrorTree function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/
bool travel(node* l, node *r){
    bool res = true;
    if(l == NULL && r == NULL)
      return true;
    if(l == NULL || r == NULL)
      return false;
    if(l->value == r->value){
      res = res && travel(l->left, r->right);
      res = res && travel(l->right, r->left);
    }else{
      res = false;
    }
    return res;
}
bool checkMirrorTree(node* a, node* b)
{
    //write your code here
    if(a->value != b->value)
      return false;
    node *al = a->left, *ar = a->right, *bl = b->left, *br = b->right;
    return (travel(al,br) && travel(ar,bl));
    
}
