//ZigZag Conversion

//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
// (you may want to display this pattern in a fixed font for better legibility)
// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        string ret;
        int n = s.size();
        int c = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += c) {
                ret += s[j + i];
                if (i != 0 && i != numRows - 1 && j + c - i < n)
                    ret += s[j + c - i];
            }
        }
        return ret;
    }
};