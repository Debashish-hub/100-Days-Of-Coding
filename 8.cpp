// Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). 
// The digits are stored such that the most significant digit is first element of array.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        vector<int> res;
        
        int sum = (arr[N - 1] + 1) % 10;
        int carry = (arr[N - 1] + 1) / 10;
        
        res.push_back(sum);
        
        for(int i = N - 2; i >= 0; i--)
        {
            sum = (arr[i] + carry) % 10;
            carry = (arr[i] + carry) / 10;
            
            res.push_back(sum);
        }
        
        if(carry != 0)
        {
            res.push_back(carry);
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends