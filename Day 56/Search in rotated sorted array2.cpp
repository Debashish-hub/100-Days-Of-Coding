// Search in Rotated Sorted Array II

// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such 
// that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low < high){
            int mid = (low + high)/2;
            
            if(low == mid){
                if(nums[high] == target)
                    low++;
                break;
            }
            if(nums[mid] < nums[high]){
                if(target > nums[mid] && target <= nums[high])
                    low = mid;
                else
                    high = mid;
            }else if(nums[low] < nums[mid]){
                if(target >= nums[low] && target <= nums[mid])
                    high = mid;
                else
                    low = mid;
            }else{
                while(low < mid && nums[low] == nums[low+1])
                    low++;
                while(high > mid && nums[high] == nums[high-1])
                    high--;
            }
        }
        return nums[low] == target;
    }
};

           