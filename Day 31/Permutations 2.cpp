// Permutations II

// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

class Solution {
public:
    vector<vector<int>> ans;
    void permute(vector<int>& v, int i){
        if(i == v.size() -1){
            ans.push_back(v);
            return;
        }
        int freq[20] = {0}; 
        for(int j = i; j<v.size(); j++){
            if(freq[v[j] + 10] == 0 ){
                swap(v[i], v[j]);
                permute(v,i + 1);
                swap(v[i], v[j]);
            }
            freq[v[j]  +10]++;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int i = 0;
        permute(nums,i);
        return ans;
    }
};