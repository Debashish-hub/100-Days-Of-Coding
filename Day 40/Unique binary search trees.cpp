// Unique Binary Search Trees

// Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes 
// of unique values from 1 to n.

class Solution {
public:
    int find(int n, int t[]){
        if(n<=1)
            return 1;
        if(t[n]!=-1)
            return t[n];
        int ans=0;
        for(int i=0; i<n; i++){
            ans+=find(i,t)*find(n-1-i,t);
        }
        return t[n] = ans;
    }
    int numTrees(int n) {
        int t[n+1];
        memset(t,-1,sizeof(t));
        return find(n,t);
    }
};
