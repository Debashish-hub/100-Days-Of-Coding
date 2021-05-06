// x Circular Subarray Sum 

// Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int n)
    {
    	int res = arr[0] , m = arr[0];
    	for(int i=1; i<n; i++){
    	    m = max(arr[i], m+arr[i]);
    	    res = max(res,m);
    	}
    	return res;
    }
    int reversekadane(int arr[],int num)
    {
    	int rsum[num],sum[num],maxv,ans=INT_MIN;
    	rsum[num-1]=arr[num-1];
    	for (int i = num-2; i >= 0; i--)
    	{
    		rsum[i]=rsum[i+1]+arr[i];
    	}
    	sum[0]=arr[0];
    	for (int i = 1; i < num; ++i)
    	{
    		sum[i]=sum[i-1]+arr[i];
    	}
    	maxv=sum[0];
    	for (int i = 1,j=0; i < num; ++i,j++)
    	{
    		maxv=max(maxv,sum[j]);
    		ans=max(ans,maxv+rsum[i]);
    	}
    	return ans;	
    }
    int circularSubarraySum(int arr[], int num){
        
    	int rk = kadane(arr,num);
        int k =  reversekadane(arr,num);
    	return max(k, rk);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends