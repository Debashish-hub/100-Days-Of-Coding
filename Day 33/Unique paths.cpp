// Unique Paths

// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the 
// grid (marked 'Finish' in the diagram below).

// How many possible unique paths are there?

class Solution {
public:
    int getPermute(long long m, long long n) {
	
        if (m == 0 || n == 0) return 1;

        if (m < n) {
            m = m + n;
            n = m - n;
            m -= n;
        }

        long long result = 1;
        for (int i = 1 ; i <= n ; i++) {
            result = (result * (m + n - i + 1)) / i;
        }
        return (int)result;
    }

    int uniquePaths(int m, int n) {
        return getPermute(m - 1, n - 1);
    }
};