// Subarray with given sum 

// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array 
// which adds to a given number S.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> ans;
        int low =0, high = 0, sum = arr[0];
        while(low <n && high < n){
                if(sum == s){
                    return {low+1, high+1};
                }else if(sum < s){
                    high++;
                    sum += arr[high];
                }else{
                    sum -= arr[low];
                    low++;
                }
                                                    
        }
        return {-1};
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
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends