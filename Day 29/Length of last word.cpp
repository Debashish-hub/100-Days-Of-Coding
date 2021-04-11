// Length of Last Word

// Given a string s consists of some words separated by spaces, return the length of the last word in the string. 
// If the last word does not exist, return 0.

// A word is a maximal substring consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string str) {
        if (str.size() == 0) {
            return 0;
        }
        int len = 0;
        bool s = false;

        for (int i = str.size() - 1; i >= 0; i--) {
            if (str[i] != ' ') {
               s = true;
               len++;
            } else if (str[i] == ' ') {
                if (s)
                    break;
            }
        }
        return len;
    }
};