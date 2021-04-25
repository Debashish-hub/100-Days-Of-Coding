// Find first set bit 

// Given an integer an N. The task is to return the position of first set bit found from the right side in the binary 
// representation of the number.
// Note: If there is no set bit in the integer N, then return 0 from the function.  

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        for(int i=0; i<=32; i++){
            if(n & (1 << (i-1)))
                return i;
        }
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends