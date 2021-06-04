//  Removing consecutive duplicates 

// You are given string str. You need to remove the consecutive duplicates from the given string using a Stack.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code 
        if(s.length() == 0 || s.length() == 1){
            return s;
        }
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if(st.top() != s[i]){
                st.push(s[i]);
            }
        }
        string ans = "";
        while(st.empty() == false){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
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
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends