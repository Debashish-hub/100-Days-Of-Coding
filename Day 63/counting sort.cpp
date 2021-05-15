// Counting Sort 

// Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int temp[27]={0};

        for(int i=0;i<arr.size();i++) {
            temp[arr[i]-'a']++;
            
        } 
        int k= 0; 
        for(int i=0;i<=26; i++) { 
            int j=0; 
            while(j<temp[i]){ 
                arr[k]= char(i+'a'); 
                j++;k++;
                
            } 
        } 
        return arr;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends