//  Maximum Subarray

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum 
// and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum = 0, max_sum = INT_MIN;
        for(int i =0; i<n ;i++){
            sum=sum+nums[i];
            if(sum>max_sum)
                max_sum=sum;
            if(sum<0)
                sum=0;
        }
    return max_sum;
    }
};
