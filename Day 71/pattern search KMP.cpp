// Pattern Search KMP 

// Given a string S and a pattern P of all lowercase characters. The task is to check if the 
// pattern exists in the string or not.


// { Driver Code Starts
//Initial Template for C++

// C++ program for implementation of KMP pattern searching 
// algorithm 
#include <bits/stdc++.h> 

using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, int* lps) 
{
    int len = 0;
    lps[0] = 0;
    
    int i = 1;
    while(i < M)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

bool KMPSearch(string pat, string txt)
{
    int N = txt.size();
    int M = pat.size();
    
    int lps[M];
    computeLPSArray(pat, M, lps);
    
    int i = 0, j = 0;
    while(i < N)
    {
        if(txt[i] == pat[j])
        {
            i++;
            j++;
        }
        if(j == M)
        {
            return true;
        }
        else if(i < N and pat[j] != txt[i])
        {
            if(j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }
    
    return false;
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{ 
    int t;
    std::cin >> t;
    
    while(t--){
        string s, pat;
        cin >> s >> pat;
        if(KMPSearch(pat, s)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
	return 0;
} 
  // } Driver Code Ends