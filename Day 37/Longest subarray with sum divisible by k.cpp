// Longest subarray with sum divisible by K 

// Given an array containing N integers and a positive integer K, find the length of the longest sub array with sum of the 
// elements divisible by the given value K.

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> mp;
        int len = 0;
        mp[0] = -1;
        int val = 0;
        
        for(int i = 0; i < n; i++){
            int sum = 0;
            val += arr[i];
            sum = (val % k + k) % k;
            if(mp.find(sum) != mp.end()) 
                len = max(len, i - mp[sum]);
            else 
                mp[sum] = i;
        }
        return len;
	}
};

       
// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends