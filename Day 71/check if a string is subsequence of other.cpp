// Check if a String is Subsequence of Other 

// Given two strings A and B, find if A is a subsequence of B. A subsequence is a sequence that can be derived 
// from another sequence by deleting some elements without changing the order of the remaining elements.




// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        //code here
        int n = A.length(), m = B.length(), i=0,j=0;
        if(n > m) return false;
        
        for(int i=0; i<m && j<n;){
            if(A[j] != B[i]){
                i++;
            }else{
                j++; i++;
            }
        }
        if(j != n){
            return false;
        }
        return true;
    }
};

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends