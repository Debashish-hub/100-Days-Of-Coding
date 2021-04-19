// Digits In Factorial 

// Given an integer N. Find the number of digits that appear in its factorial. 
// Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double c = 0;
        while(N > 0){
            c += log10(N);
            N--;
        }
        return c+1;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends