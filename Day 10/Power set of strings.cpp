// Power Set of Strings
// Many students face the issue with questions that are based on recursion and require string manipulation hence we 
// have taken this as an agenda to make all of your very comfortable with such questions. Keeping this in mind we bring 
// to you another such problem. The problem is to generate the power set of a given string in lexicographical order.

// Power set P(S) of a set S is the set of all subsets of S. For example S={a,b,c} then P(s)={{},{a},{b},{c},{a,b},{a,c},{b,c},{a,b,c}}. 
// Print without empty set.

#include <bits/stdc++.h>
  using namespace std;
  void permuteRec(string str, int n, int index = -1, string curr = "") { 
    if (index == n) 
        return; 
    cout << curr << "\n"; 
    for (int i = index + 1; i < n; i++) { 
        curr += str[i]; 
        permuteRec(str, n, i, curr); 
        curr = curr.erase(curr.size() - 1); 
    } 
    return; 
  } 
  int main()
  {
    //write your code here
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    permuteRec(str,str.size());
    return 0;
  }