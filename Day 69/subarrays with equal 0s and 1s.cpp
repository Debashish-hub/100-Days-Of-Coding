// Subarrays with equal 1s and 0s 

// Given an array containing 0s and 1s. Find the number of subarrays having equal number of 0s and 1s.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i=0; i<n; i++){
            if(arr[i] == 0)
                arr[i] = -1;
        }
        unordered_map<long long int, long long int> mp;
        long long int sum = 0, count = 0;
        mp[0]++;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(mp.find(sum) != mp.end()){
                count += mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends