//  Group Anagrams

// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(string str : strs){
            string copy = str;
            sort(copy.begin(), copy.end());
            anagrams[copy].push_back(str);
        }
        vector<vector<string>> res;
        for(const auto &p : anagrams) res.push_back(p.second);
        return res;
    }
};