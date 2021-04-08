//  Letter Combinations of a Phone Number

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
// Return the answer in any order.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.



class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans;
        vector<string> letter(10);
        letter[2] = "abc";
        letter[3] = "def";
        letter[4] = "ghi";
        letter[5] = "jkl";
        letter[6] = "mno";
        letter[7] = "pqrs";
        letter[8] = "tuv";
        letter[9] = "wxyz";
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                int d = digits[i] - '0';
                for(char c : letter[d]) {
                    ans.push_back(string(1, c));
                }
            }
            else {
                int d = digits[i] - '0';
                vector<string> ans1;
                int len = ans.size();
                for(string& s : ans) {
                    for(char c : letter[d]) {
                        ans1.push_back(s + c);
                    }
                }
                ans = ans1;
            }
        }
        return ans;
    }
};