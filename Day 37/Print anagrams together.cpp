// Print Anagrams Together 

// Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their 
// appearance in the original array. Look at the sample case for clarification.

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

 // } Driver Code Ends
//User function Template for C++

vector<vector<string>> Anagrams(vector<string>& string_list) {
    map<string, vector<string>> mp;
    
    for(int i = 0; i < string_list.size(); i++){
        string data = string_list[i];
        sort(data.begin(), data.end());
        mp[data].push_back(string_list[i]);
    }
    
    vector<vector<string>> res;
    for(auto x: mp){
        vector<string> val;
        for(auto y: x.second){
            val.push_back(y);
        }
        res.push_back(val);
    }
    
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends