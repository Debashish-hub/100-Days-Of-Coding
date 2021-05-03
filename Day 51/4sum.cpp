// 4Sum

// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;
            
            for (int j = i + 1; j < n; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) 
                    continue;
                
                int val = target - (nums[i] + nums[j]);
                
                
                int l = j + 1, r = n - 1;
                while (l < n && r >= 0 && l < r) {
                    if (nums[l] + nums[r] > val) {
                        r--;
                    } else if (nums[l] + nums[r] < val) {
                        l++;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while (l + 1 < n && nums[l + 1] == nums[l]) 
                            l++;
                        l++;
                        while (r > 0 && nums[r - 1] == nums[r]) 
                            r--;
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};