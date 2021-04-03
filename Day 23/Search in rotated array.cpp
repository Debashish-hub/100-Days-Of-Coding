// Search in Rotated Sorted Array
// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such 
// that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the rotation and an integer target, return the index of target if it is in nums, 
// or -1 if it is not in nums.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] >= nums[l]){
                if(target >= nums[l] && target <= nums[mid])
                    r = mid -1;
                else
                     l = mid + 1;
            }else{
                if(target >= nums[mid] && target <= nums[r])
                    l = mid+1;
                else
                    r = mid -1;
            }
            
        }
        return -1;
    }
};