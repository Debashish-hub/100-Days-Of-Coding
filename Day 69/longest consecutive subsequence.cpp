//  Longest consecutive subsequence 

// Given an array of positive integers. Find the length of the longest sub-sequence such that elements 
// in the subsequence are consecutive integers, the consecutive numbers can be in any order.



// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s(arr , arr+N);
      int res = 1;
      for(auto x:s){
          if(s.find(x-1) == s.end()){
              int c = 1;
              while(s.find(x+c) != s.end()){
                  c++;
              }
              res = max(res,c);
          }
      }
      return res;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends