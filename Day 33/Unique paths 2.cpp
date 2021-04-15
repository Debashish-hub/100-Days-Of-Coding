// Unique Paths II

// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of 
// the grid (marked 'Finish' in the diagram below).
// Now consider if some obstacles are added to the grids. How many unique paths would there be?
// An obstacle and space is marked as 1 and 0 respectively in the grid.

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        unsigned int dp[m][n];
        
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1)
            return 0;
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                
                else if(i == m-1 && j == n-1)
                    dp[i][j] = 1;
                
                else if(i == m-1){
                    if(dp[i][j+1] == 0)
                        dp[i][j] = 0;
                    
                    else
                        dp[i][j] = 1;
                }
                
                else if(j == n-1){
                    if(dp[i+1][j] == 0)
                        dp[i][j] = 0;
                    
                    else
                        dp[i][j] = 1;
                }
                    
                else{
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
                }       
            }
        }
        
        return dp[0][0];
    }
};