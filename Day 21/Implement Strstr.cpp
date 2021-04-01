// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:
// What should we return when needle is an empty string? This is a great question to ask during an interview.
// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return  0;
        }
        int i=0, j=0;
        while(i<haystack.length() && j< needle.length()){
            int start = i;
            while(i<haystack.length() && j< needle.length() && haystack[i] == needle[j]){
                i++;
                j++;
            }
            if(j == needle.length()){
                return start;
            }
            i = start + 1;
            j =0;
        }
        return -1;
    }
};


