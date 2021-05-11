//  Peak Index in a Mountain Array

// Let's call an array arr a mountain if the following properties hold:

// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]

// Given an integer array arr that is guaranteed to be a mountain, return any i such that 
// arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return mid;
            else if(arr[mid] < arr[mid - 1])
                high = mid ;
            else
                low = mid ;
        }
        return -1;
    }
};