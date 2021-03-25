// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.


class Solution {
public:
    vector<string> result;
    
    void get(int open, int close, int total, string s){
        if(close > open || open > total) 
            return;
        if(open == total && close == total) {
            result.push_back(s);
            return;
        }
        get(open + 1, close, total, s + "(");
        get(open, close + 1, total, s + ")");
    }
    
    vector<string> generateParenthesis(int n) {
        get(0, 0, n, "");
        return result;
    }
};