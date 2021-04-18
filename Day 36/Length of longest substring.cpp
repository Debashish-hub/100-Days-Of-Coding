// Length of the longest substring 

// Given a string S, find the length of the longest substring without repeating characters.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        unordered_map <char,int> mp;
        int i=0, j=0, maxlen=0, count=0;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size() == j-i+1){
                maxlen = max(maxlen, j-i+1);
            }
            while(mp.size() != j-i+1){
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                    i++;
            }
            j++;
        }
        return maxlen;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends