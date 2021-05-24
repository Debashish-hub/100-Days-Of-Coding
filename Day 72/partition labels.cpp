// Partition Labels

// A string s of lowercase English letters is given. We want to partition this string into as many parts 
// as possible so that each letter appears in at most one part, and return a list of integers representing 
// the size of these parts.


class Solution {
public:
    vector<int> partitionLabels(string s) {
         int last[26]={0}, n=s.size();   
         vector<int> res;

         for(int i=0; i<size(s); ++i){ 
             last[s[i]-'a']=i;
         }
        
         for(int l=-1, r=0, curEnd=0; r<n ; ++r){
             curEnd = max(curEnd, last[s[r]-'a']);

             if(curEnd==r){
                 res.push_back(r-l); 
                 l=r; 
             }
         }

         return res;
    }
};