// The Modified String 

// Ishaan is playing with strings these days. He has found a new string. He wants to modify it as per the 
// following rules to make it valid:

// The string should not have three consecutive same characters (Refer example for explanation).
// He can add any number of characters anywhere in the string. 
// Find the minimum number of characters which Ishaan must insert in the string to make it valid.



// { Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        // Your code here
        int c = 0;
        for(int i=0; i<a.length()-2; i++){
            if(a[i] == a[i+1] && a[i] == a[i+2]){
                c++;
                i = i+1;
            }
        }
        return c;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends