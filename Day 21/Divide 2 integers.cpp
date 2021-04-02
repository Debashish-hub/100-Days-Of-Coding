// Divide Two Integers

// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
// Return the quotient after dividing dividend by divisor.
// The integer division should truncate toward zero, which means losing its fractional part. For example, truncate(8.345) = 8 and 
// truncate(-2.7335) = -2.
// Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed 
// integer range: [−231, 231 − 1]. For this problem, assume that your function returns 231 − 1 when the division result overflows.

class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign = (dividend<0) ^ (divisor<0)?-1:1;
        long dvd = dividend;
        long dvs = divisor;
        dvd = abs(dvd);
        dvs = abs(dvs);
        int ret = 0;
        for (int i = 31; i>=0; --i) {
            if (dvd>>i >= dvs) {
                // overflow
                if (i==31) {
                    return sign>0?INT_MAX:INT_MIN;
                }
                ret += 1<<i;
                dvd -= dvs<<i;
            }
        }
        return sign>0 ? ret : -ret;
    }
};