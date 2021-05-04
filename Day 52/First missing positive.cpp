// First Missing Positive

// Given an unsorted integer array nums, find the smallest missing positive integer.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool> set(n);
        for(int i = 0; i<n; i++) {
            if(nums[i] > 0 && nums[i] <= n) {
                set[nums[i]-1] = true;
            }
        }
        for(int i = 0; i<n; i++) {
            if(set[i] == false) 
                return i+1;
        }
        return n+1; 
    }
};