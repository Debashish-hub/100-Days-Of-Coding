// Majority Element 

// Given an array A of N elements. Find the majority element in the array. 
// A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    int findCandidate(int a[], int size) 
    { 
        int maj_index = 0, count = 1; 
        for (int i = 1; i < size; i++) { 
            if (a[maj_index] == a[i]) 
                count++; 
            else
                count--; 
            if (count == 0) { 
                maj_index = i; 
                count = 1; 
            } 
        } 
        return a[maj_index]; 
    } 
      
    /* Function to check if the candidate 
       occurs more than n/2 times */
    bool isMajority(int a[], int size, int cand) 
    { 
        int count = 0; 
        for (int i = 0; i < size; i++) 
            if (a[i] == cand) 
                count++; 
        if (count > size / 2) 
            return 1; 
        else
            return 0; 
    } 
      
    /* Function to get Majority Element */
    int majorityElement(int a[], int size) 
    { 
        /* Find the candidate for Majority*/
        int cand = findCandidate(a, size); 
        if (isMajority(a, size, cand)) 
            return cand; 
        else
            return -1; 
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
