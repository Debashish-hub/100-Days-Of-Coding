// Sort Colors

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the 
// same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.


class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a= b;
        b= temp;
    }
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            
        }
    }
};
