// Check if strings are rotations of each other or not 

// Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. 
// The characters in the strings are in lowercase.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length() != s2.length())
            return false;
        
        return ((s1+s1).find(s2) != string::npos);
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends