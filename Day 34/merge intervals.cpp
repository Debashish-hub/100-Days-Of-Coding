//  Merge Intervals

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> result;
        
        for (int i = 0 ; i < intervals.size(); ++i)
        {
            if (result.size() > 0 and (result[result.size() - 1][1] >= intervals[i][0]) ) 
                result[result.size() - 1][1] = max(result[result.size() - 1][1], intervals[i][1]); 
            else
                result.push_back(intervals[i]);
        }
        
        return result;
    }
};