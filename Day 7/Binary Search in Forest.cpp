//Binary Search in forest 

//There are n tree in a forest. Heights of the trees is stored in array tree[ ]. If ith tree is cut at height h, the wood obtained is tree[i]-h, given that tree[i]>h. If total wood needed is k (not less, neither more) find the height at which 
//every tree should be cut (all trees have to be cut at the same height).


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int find_height(int tree[], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;

        cout<< find_height(tree,n,k) << endl;
    }
    return 1;
}// } Driver Code Ends


int wood_collected(int tree[], int n, int h)
{
    int ret=0;
    for( int i=0; i<n; i++ )
        if( tree[i] > h )
            ret += tree[i] - h;

    return ret;
}

int find_height(int tree[], int n, int k)
{
    sort(tree, tree+n);
    int l=0, h=tree[n-1];

    while(l<=h)
    {
        int mid = (l+h)/2;
        int val = wood_collected(tree,n,mid);
        
        if(val==k) 
            return mid;
        if(val>k) 
            l = mid+1;
        else 
            h = mid-1;
    }
    return -1;
}
