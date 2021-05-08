// Valid Perfect Square

// Given a positive integer num, write a function which returns True if num is a perfect square else False.
// Follow up: Do not use any built-in library function such as sqrt.


class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1, high = num;
        
        while(low <= high){
            long mid = (low + high)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid > num)
                high = mid-1;
            else
                low = mid +1;
        }
        return false;
    }
};