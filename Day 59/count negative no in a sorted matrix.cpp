//  Count Negative Numbers in a Sorted Matrix

// Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the 
// number of negative numbers in grid.

 
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = 0, col = grid[0].size()-1;
        int ans = 0;
        while(row<grid.size() && col>=0){
            if(grid[row][col]>=0)
                row++;
            else{
                ans+=grid.size()-row;
                col--;
            }
        }
        return ans;
    }
};