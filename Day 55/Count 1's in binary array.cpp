// Count 1's in binary array 

// Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        int low = 0, high = N-1, res=0;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] != 1)
                high = mid - 1;
            else
                if((arr[mid] != arr[mid + 1] || mid == N-1) && arr[mid] == 1){
                    res = mid+1;
                    break;
                }
                else
                    low = mid + 1;
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
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends