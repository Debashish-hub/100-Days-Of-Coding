//  Merge Sorted Array

// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
// The number of elements initialized in nums1 and nums2 are m and n respectively. 
// You may assume that nums1 has a size equal to m + n such that it has enough space to hold additional elements from nums2.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a =0;
        for(int i=m; i<nums1.size(); i++){
            nums1[i] = nums2[a];
            a++;
        }
        sort(nums1.begin(), nums1.end());
    }
};