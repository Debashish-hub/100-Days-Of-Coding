// Minimum Size Subarray Sum


// Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. 
// If there is no such subarray, return 0 instead.


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum =0, left = 0, ans = INT_MAX;
        for(int i=0; i<n; i++){
            sum += nums[i];
            while(sum >= target){
                ans = min(ans, i+1-left);
                sum -= nums[left++];
            }
        }
        return (ans == INT_MAX)? 0: ans;
    }
};