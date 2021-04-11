// Plus One

// Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
// The digits are stored such that the most significant digit is at the head of the list, and 
// each element in the array contains a single digit.

// You may assume the integer does not contain any leading zero, except the number 0 itself.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int j=n-1;
        bool is_all_nine=true;
        int c=0;
        while(j>=0)
        {
            if(digits[j]!=9)
            {
                digits[j]++;
                is_all_nine=false;
                break;
            }
            else 
            {
                digits[j]=0;
                j--;
            }
            c++;
        }
        if(!is_all_nine)
            return digits;
        else
        {
            vector<int>ans={1};
            for(int i=0;i<c;i++)
            {
                ans.push_back(0);
            }
            return ans;
        }
    }
};