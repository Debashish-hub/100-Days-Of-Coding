// Rearrange an array with O(1) extra space 

// Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] 
// becomes arr[arr[i]].


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        for(int i=0; i<n; i++){
            arr[i] += (arr[arr[i] % n] % n) *n;
        }
        for(int i=0; i<n; i++){
            arr[i] = arr[i] / n;
        }
    }
};


// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends