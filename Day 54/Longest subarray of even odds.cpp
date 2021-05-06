// Longest Subarray Of Evens And Odds 

// You are given an array of size n. Find the maximum possible length of a subarray such that its elements are 
// arranged alternately either as even and odd or odd and even .


// { Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int curr = 1, res = 1;
       for(int i=1; i<n; i++){
           if(((arr[i] % 2 == 0) && (arr[i-1] % 2 != 0)) || ((arr[i] % 2 != 0) && (arr[i-1] % 2 == 0))){
               curr++ ;
                res = max(res,curr);
           }
           else
                curr = 1;
       }
       return res;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends