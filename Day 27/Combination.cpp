// Combination Sum

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of 
// candidates where the chosen numbers sum to target. You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if 
// the frequency of at least one of the chosen numbers is different.
// It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

class Solution {
public:
    vector<vector<int>> res;
    void sol(vector<int>& cand, vector<int>& temp, int tar, int start){
        
        if(tar<0){
            return;
        }
        if(tar==0){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<cand.size();i++){
            
            temp.push_back(cand[i]);
            sol(cand,temp,tar-cand[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
      
        sol(candidates,temp,target,0);
        return res;
    }
};