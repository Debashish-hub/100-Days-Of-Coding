//Square root of a number 

//Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int a = x/2;
        if(x==1)
            return 1;
        for(long long int i=a; i>1; i--){
            if(i*i <= x)
                return i;
        }
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends