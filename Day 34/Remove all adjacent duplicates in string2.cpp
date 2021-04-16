// Remove All Adjacent Duplicates in String II

// Given a string s, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them 
// causing the left and the right side of the deleted substring to concatenate together.
// We repeatedly make k duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made.
// It is guaranteed that the answer is unique.

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int combo =1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) 
                combo++;
            else             
                combo=1;
            if(combo == k){
                string pref = s.substr(0,i-k+1);         
                string post = s.substr(i+1,s.length()-i-1); 
                i=0;
                combo=1;
                s= pref+post;
            }
        }
        return s;
    }
};