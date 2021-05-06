// Subsets II

// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res; 
        vector<int> empty; 
        res.push_back(empty);
        
        if(nums.size()==0){
            return res;
        }
        
        int last_size=0; 
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            if(i==0 || nums[i]!=nums[i-1]){  
                last_size = res.size();
                for(int j=0;j<last_size;j++){
                    vector<int> temp = res[j];
                    temp.push_back(nums[i]);
                    res.push_back(temp);
                }
            }
            else{   
                int j=last_size;
                last_size = res.size();
                for( j=j ;j<last_size;j++){
                    vector<int> temp = res[j];
                    temp.push_back(nums[i]);
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
};