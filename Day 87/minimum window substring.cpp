// Minimum Window Substring

// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s 
// such that every character in t (including duplicates) is included in the window. If there is no such substring, 
// return the empty string "".

// The testcases will be generated such that the answer is unique.

// A substring is a contiguous sequence of characters within the string.


class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";
        map<char, int> mp;
        for(int i = 0; i < t.length(); i++){
            mp[t[i]]++;
        }
        int cnt = mp.size();
        int i = 0;
        int j = 0;
        int n = s.length();
        string res = "";
        int minIdx = -1;
        int ansLen = INT_MAX;
        while(j < n){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    cnt--;
                }
            }
            while(cnt == 0){
                if(ansLen > j - i + 1){
                    minIdx = i;
                    ansLen = j - i + 1;
                }
                if(mp.find(s[i]) != mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) cnt++;
                }
                i++;
            }
            j++;
        }
        return (minIdx == -1) ? "" : s.substr(minIdx, ansLen);

    }
}; 