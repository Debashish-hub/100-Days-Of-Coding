//  Jump Game II

// Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
// Each element in the array represents your maximum jump length at that position.
// Your goal is to reach the last index in the minimum number of jumps.
// You can assume that you can always reach the last index.

class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        int jumps=0;
        int currstart=0;
        int currend=0;
        
        for(int i=0;i<size-1;i++){
            currstart=max(currstart,i+nums[i]);
            if(i==currend){
                currend=currstart;
                jumps++;
            }
            if(currend>=size)
                break;
        }
        return jumps;
    }
};