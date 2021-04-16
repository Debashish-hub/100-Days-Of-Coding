// Jump Game

// Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
// Each element in the array represents your maximum jump length at that position.
// Determine if you are able to reach the last index.



class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int r = 0;
        for(int i=0; i<size; i++){
            if(i>r)
                return false;
            r = max(r, i+nums[i]);
        }
        return true;
    }
};