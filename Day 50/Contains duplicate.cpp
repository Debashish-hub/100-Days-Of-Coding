// Contains Duplicate

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every 
// element is distinct.


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()), nums.end());
        
        return (size == nums.size())?false:true;
    }
};
