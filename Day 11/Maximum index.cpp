// Maximum Index 
// Given an array A[] of N positive integers. The task is to find the maximum of j - i 
// subjected to the constraint of A[i] <= A[j].

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        int low=0,high=n-1,ans=0,max=0;
        while(low<=high){
            if(arr[low]<=arr[high]){
                ans=high-low;
                if(ans>max)
                    max=ans;
                    low=low+1;
                    high=n-1;
                }
                else
                    high--;
            }
        return max;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends