// X of a Kind in a Deck of Cards


// In a deck of cards, each card has an integer written on it.

// Return true if and only if you can choose X >= 2 such that it is possible to split the entire deck into 1 or 
// more groups of cards, where:

// Each group has exactly X cards.
// All the cards in each group have the same integer.


class Solution {
public:
    int gcd(int a, int b){
        return a==0? b: gcd(b%a, a);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(int d: deck)
            m[d]++;
        
        int res = 0;
        for(auto p: m)
            res=gcd(res,p.second);
        
        return res>=2;
    }
};