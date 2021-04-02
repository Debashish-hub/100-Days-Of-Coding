// Next Permutation

// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
// The replacement must be in place and use only constant extra memory.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
		
        for(;i>=0;i--){
            
            if(nums[i]>=nums[i+1])
                continue;
            
            int k=n-1; 
            while( i>=0 && nums[i]>=nums[k])
                k--;
                    
            int temp=nums[i];
            nums[i]=nums[k];
            nums[k]=temp;
            break;
        }
        
        reverse(nums.begin()+i+1,nums.end());
    }
};