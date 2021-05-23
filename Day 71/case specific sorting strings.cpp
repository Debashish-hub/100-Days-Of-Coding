// Case-specific Sorting of Strings 

// Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and 
// lowercase letters separately such that if the ith place in the original string had an Uppercase character 
// then it should not have a lowercase character after being sorted and vice versa.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string upper, lower;
        for(int i=0; i<n; i++){
            if(isupper(str[i])){
                upper.push_back(str[i]);
            }else{
                lower.push_back(str[i]);
            }
        }
        sort(upper.begin(), upper.end());
        sort(lower.begin(),lower.end());
        int m = 0, o = 0;
        string ans;
        for(int i=0; i<n; i++){
            if(isupper(str[i])){
                ans.push_back(upper[m]);
                m++;
            }else{
                ans.push_back(lower[o]);
                o++;
            }
        }
        return ans;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends