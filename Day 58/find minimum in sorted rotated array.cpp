// Find Minimum in Rotated Sorted Array


// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] 
// might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int last = nums.size() - 1;
        if (nums[0] <= nums[last])
        {
            return nums[0];
        }

        int min = nums[last];
        int left = 0, right = last;
        while(right >= left)
        {
            int mid = (right + left) / 2;
            if (nums[mid] > nums[last])
            {
                left = mid + 1;
            }
            else
            {
                min = nums[mid];
                right = mid - 1;
            }
        }

        return min;
    }
};

