// Bit Difference 

// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        // Your logic here
        int count = 0;
        for(int i=0; i<=32; i++){
            if((a & (1 <<(i-1))) != (b & (1 <<(i-1)))){
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends