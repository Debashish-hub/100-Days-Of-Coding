// Minimum Number of Operations to Move All Balls to Each Box

// You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if
//  it contains one ball.
// In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. 
// Note that after doing so, there may be more than one ball in some boxes.
// Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.
// Each answer[i] is calculated considering the initial state of the boxes.



class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res;
        int sum = 0, right = 0, left = 0;

        for(int i = 0; i < n; i++)
        {
            if(boxes[i] == '1')
            {
                sum += i;
                right++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            res.push_back(sum);
            if(boxes[i] == '1')
            {
                right--;
                left++;
            }

            sum += left - right;
        }

        return res;
    }
};