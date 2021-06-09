//  Split Array Largest Sum

// Given an array nums which consists of non-negative integers and an integer m, you can split the array into 
// m non-empty continuous subarrays.

// Write an algorithm to minimize the largest sum among these m subarrays.

class Solution {
public:
    bool isvalid(vector<int> arr,int a,int b)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(arr[i]>a) return false;
            if(sum>a)
            {
                count++;
                sum=arr[i];
            }
            if(count>b) return false;
        }
        return true;
        
    }
   int splitArray(vector<int>& nums, int m) {
        
        int sum=0, min=0;
        
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        
        int h=sum,l=*min_element(nums.begin(),nums.end());
        int res=-1;
        
        if(nums.size()==m)
        {
            return *max_element(nums.begin(),nums.end());
        }       
       
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            if(isvalid(nums,mid,m)==true)
            {
                res=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return res;
    }
};