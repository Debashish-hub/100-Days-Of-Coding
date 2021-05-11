// Arranging Coins

// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith 
// row has exactly i coins. The last row of the staircase may be incomplete.

// Given the integer n, return the number of complete rows of the staircase you will build.

class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0, right = n, curr, mid;
        while(left <= right){
            mid = left + (right - left)/2;
            curr = mid * (mid + 1) / 2;
            if(curr == n)
                return mid;
            else if(curr > n)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right;
    }
};