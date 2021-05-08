//  Minimum Number in a sorted rotated array 

// Given an array of distinct elements which was initially sorted. This array is rotated at some unknown point. 
// The task is to find the minimum element in the given sorted and rotated array. 


// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to find the minimum element in sorted and rotated array.
int minNumber(int arr[], int low, int high)
{
    // Your code here
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] < arr[mid-1] || low == high){
            return arr[mid];
        }else if(arr[mid] > arr[high]){
            low = mid +1;
        }else if(arr[mid] < arr[high]){
            high = mid -1;
        }
    }
}

// { Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;++i)
			scanf("%d", &a[i]);	
	
		printf("%d\n", minNumber(a,0,n-1) );
	}
	return 0;
}  // } Driver Code Ends