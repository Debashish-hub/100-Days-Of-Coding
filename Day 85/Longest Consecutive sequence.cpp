//  Longest Consecutive Sequence

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int finalSize = 1;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                // fowrd elements
                mp.erase(nums[i]);
                int forwardElement = nums[i]+1;
                int size = 1;
                while(mp.count(forwardElement)){
                    size++;
                    mp.erase(forwardElement);
                    forwardElement += 1;
                }
                
                int backElement = nums[i] - 1;
                
                while(mp.count(backElement)){
                    size++;
                    mp.erase(backElement);
                    backElement -= 1;
                }
                
                finalSize = max(finalSize,size);

            }
        }
        
        return finalSize;
    }
};