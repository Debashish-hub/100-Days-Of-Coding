// Next Greater Element 

// Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for 
// each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater 
// than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. 
// For example, next greater of the last element is always -1.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        stack<long long> st;
        st.push(arr[n-1]);
        ans.push_back(-1);
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            ans.push_back(st.empty() ? -1 : st.top());
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends