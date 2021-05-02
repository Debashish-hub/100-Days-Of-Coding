// Two Sum II - Input array is sorted

// Given an array of integers numbers that is already sorted in ascending order, find two numbers such that they add up to a 
// specific target number.
// Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= 
// numbers.length.

// You may assume that each input would have exactly one solution and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start =0;
        int end = numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]>target)
                end--;
            else if(numbers[start]+numbers[end]<target)
                start++;
            else if(numbers[start]+numbers[end]==target){
                return {start+1, end+1};
            }
                
        }
        return {}; 
    }
};