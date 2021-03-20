// You are given an array A of integers of length N. You need to calculate factorial of each number. 
// The answer can be very large, so print it modulo 109 + 7.

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long

 // } Driver Code Ends
//User function template for C++

// #define ll long long
class Solution{
public:
	vector<ll> factorial(vector<ll> a, int n) {
		ll int maxn=*max_element(a.begin(),a.end());

        vector<ll>ans,fact;
        
        fact.push_back(1);
        for(int i=1;i<=maxn;i++)
        {
        fact.push_back((fact[i-1]*i)%1000000007);
        }
        
        for(int i=0;i<n;i++) {
            ans.push_back(fact[a[i]]);
            } 
            
            return ans; 
	    
	} 
        	
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<ll> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<ll> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
