// Maximum Water Between Two Buildings 

// Given an integer array representing the heights of N buildings, the task is to delete N-2 buildings such that 
// the water that can be trapped between the remaining two building is maximum.
// Note: The total water trapped between two buildings is gap between them (number of buildings removed) multiplied by 
// height of the smaller building.

// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        //Your code here
        if(n <= 2)
            return 0;
        int l = 0, h = n-1, ans = 0;
        while(l < h){
            int tot = min(height[l] * (h-l-1), height[h] * (h-l-1));
            ans = max(ans, tot);
            if(height[l] <= height[h])
                l++;
            else
                h--;
        }
        return ans;
    } 
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends