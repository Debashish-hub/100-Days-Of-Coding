//Find missing in second array 

//Given two arrays A and B contains integers of size N and M, the task is to find numbers which are present in the 
//first array, but not present in the second array.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[], int N, int M) { 
	    // Your code goes here
	    unordered_set<long long> s;
	    for(int i = 0; i < N; i++){
	        s.insert(A[i]);
	    }
	    for(int i = 0; i < M; i++){
	        if(s.find(B[i]) != s.end()){
	            s.erase(B[i]);
	        }
	    }
	    vector<long long> res;
	    for(int i = 0; i < N; i++){
	        if(s.find(A[i]) != s.end()){
	            res.emplace_back(A[i]);
	        }
	    }
	    return res;
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends