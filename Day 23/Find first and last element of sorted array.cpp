// Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// Follow up: Could you write an algorithm with O(log n) runtime complexity?

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0,end= nums.size()-1;
        int index = -1;
        vector <int>ans;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] < target){
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                index = mid;
                end = mid-1;
            }
        }
        ans.push_back(index);
        start = 0, end =nums.size()-1,index= -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] < target){
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                index = mid;
                start = mid+1;
            }
        }
        ans.push_back(index);
        return ans;
        
    }
};




