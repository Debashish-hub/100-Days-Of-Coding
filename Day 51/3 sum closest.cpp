// 3Sum Closest

// Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
// Return the sum of the three integers. You may assume that each input would have exactly one solution.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int res = 0;
        int min_diff = INT_MAX;

        for(int i = 0; i < n - 2; i++)
        {
            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(target - sum) < min_diff)
                {
                    min_diff = abs(target - sum);
                    res = sum;
                }
                if(sum > target)
                    k--;
                else 
                    j++;
            }
        }
        return res;
    }
};