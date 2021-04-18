// Array Pair Sum Divisibility Problem 

// Given an array of integers and a number k, write a function that returns true if given array can be divided 
// into pairs such that sum of every pair is divisible by k.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map <int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i] % k]++;
        }
        if(nums.size() % 2 == 1 || m[0] % 2 == 1){
            return false;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % k == 0){
                if(m[0] > 0)
                    m[0]--;
                else
                    return false;
            }else if(m[k - (nums[i] % k)] > 0){
                m[k - (nums[i] % k)]--;
            }else{
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends