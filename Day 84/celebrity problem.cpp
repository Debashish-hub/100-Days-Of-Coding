// The Celebrity Problem 

// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, 
// find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  
// is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Note: Follow 0 based indexing.

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int a = 0, b = n-1;
        while(a<b){
            if(M[a][b] == 1){
                a++;
            }else{
                b--;
            }
        }
        for(int i=0; i<n; i++){
            if((i != a) && (M[a][i] == 1 || M[i][a] == 0)){
                return -1;
            }
        }
        return a;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends