// Triplets with sum with given range 

// Given an array Arr[] of N distinct integers and a range from L to R, the task is to 
// count the number of triplets having a sum in the range [L, R].

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countTripletsLessThan(int arr[], int n, int val) {  
        sort(arr, arr + n); 
        int ans = 0; 
        int j, k; 
        int sum; 
        for (int i = 0; i < n - 2; i++) { 
            j = i + 1; 
            k = n - 1; 
            while (j != k) { 
                sum = arr[i] + arr[j] + arr[k]; 
                if (sum > val) 
                    k--; 
                else { 
                    ans += (k - j); 
                    j++; 
                } 
            } 
        } 
        return ans; 
    } 
    int countTriplets(int arr[], int n, int a, int b) {  
        int res;  
        res = countTripletsLessThan(arr, n, b) - countTripletsLessThan(arr, n, a - 1); 
        return res; 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}  // } Driver Code Ends