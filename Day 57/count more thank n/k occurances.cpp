// Count More than n/k Occurences 

// Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.


// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        sort(arr, arr+n);
        int moxxi=0, count=1;
        for(int i=1;i<=n;i++){
            if (arr[i]==arr[i-1]){
                count++;
            }
            if (arr[i]!=arr[i-1] || arr[i]==arr[n]){
                if (count>n/k)
                    moxxi++;
                count=1;
            }
        }
        return moxxi;
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends