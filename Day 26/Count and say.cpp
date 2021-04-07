// Count and Say

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of 
// the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit 
// string, replace the counts with a number and concatenate every saying.

// Given a positive integer n, return the nth term of the count-and-say sequence.

class Solution {
public:
    string say(string s){
        if (s.empty()) 
            return "";

        string saying;

        uint32_t i = 0;
        while (i < s.size()){
            uint32_t j = i;
            uint32_t counter = 0;
            while (j < s.size()){
                if (s[j] != s[i]) break;
                counter++;
                j++;
            }
            if (counter > 0){
                saying.append(to_string(counter));
                saying.push_back(s[i]);
            }            
            i = j;
        }

        return saying;
    }

    string countAndSay(int n){
        if (n == 1) return "1";
        string res = countAndSay(n - 1);
        return say(res);
    }
};