// Find Peak Element

// A peak element is an element that is strictly greater than its neighbors.
// Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, 
// return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start + end) / 2;
        
        while (true) {
            if (mid != nums.size() - 1 && nums[mid] < nums[mid + 1])
                start = mid + 1;
            else if (mid != 0 && nums[mid] < nums[mid - 1])
                end = mid - 1;
            else
                return mid;
            
            mid = (start + end) / 2;   
        }

    }
};