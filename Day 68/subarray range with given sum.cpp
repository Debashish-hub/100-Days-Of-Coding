// Subarray range with given sum 

// Given an unsorted array of integers and a sum. The task is to count the number of subarray which adds to the given sum.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> mp;
        int res = 0, c = 0;
        for(int i=0; i<n; i++){
            c += arr[i];
            if(c == sum){
                res++;
            }
            if(mp.find(c - sum) != mp.end()){
                res += mp[c-sum];
            }
            mp[c]++;
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends