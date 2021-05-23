//  Pangram Checking 

// Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str)
    {
        // your code 
        int c[26] = {0};
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                c[str[i] - 'a']++;
            }
            if(str[i] >= 'A' && str[i] <= 'Z'){
                c[str[i] - 'A']++;
            }
        }
        for(int i=0; i<26; i++){
            if(c[i] == 0){
                return false;
            }
        }
        return true;
    }

};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends