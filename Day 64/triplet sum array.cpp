// Triplet Sum in Array 

// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i=0; i<n; i++){
            int j = i+1, k = n-1;
            while(j < k){
                if(A[i] + A[j] + A[k] == X){
                    return true;
                }else if(A[i] + A[j] + A[k] > X){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends