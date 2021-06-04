//  Removing consecutive duplicates - 2 

// You are given string str. You need to remove the pair of duplicates.
// Note: The pair should be of adjacent elements and after removing a pair the remaining string is joined together. 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code 
        string res;
        int j = 0;
        res.push_back(str[0]);
        int n = str.length();
        for(int i = 1; i < n; i++){
            if(j < 0){
                res.push_back(str[i]);
                j++;
            }
            else if(res[j] == str[i]){
                res.pop_back();
                j--;
            }
            else{
                res.push_back(str[i]);
                j++;
            }

        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends