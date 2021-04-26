// Josephus problem 

// Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in 
// circle in a fixed direction.

// The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, 
// you are the last one remaining and survive.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       return n==1 ? 1:((k + josephus(n-1, k) - 1)%n + 1);
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends