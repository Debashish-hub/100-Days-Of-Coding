// Climbing Stairs

// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        while(n - 1 > 0) {
            b = a+b;
            a = b-a;
            n--;
        }
        return b;
    }  
};