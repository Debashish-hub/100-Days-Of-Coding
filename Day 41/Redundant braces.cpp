// Redundant Braces
// You are given a mathematical formula consisting of '*', '-', '+', '/'. The formula also contains brackets '()'. 
// These formulas are given as assignments to the students for evaluation but the Teacher has made a small mistake while 
// preparing the assignment. He has added redundant braces.

// If the formula is ((a+b))+c, you can see there is an extra bracket around a+b, which means this formula has 1 redundant bracket.

// Your task is to find whether the given formula consists of a redundant bracket or not.

#include <bits/stdc++.h>
  using namespace std;
  bool braces(string s){
    int l = 0, r = 0;
    for(int i=0; i<s.length(); i++){
      if(s[i] == '(' && s[i+2] == ')')
        return 1;
      if (s[i] == '*' || s[i] == '+' || s[i] == '-'  || s[i] == '/')
        l++;
      if (s[i] == '(')
        r++;
    }
    if(r > l)
      return 1;
    return 0;
  }
  
  int main()
  {
    //write your code here
    string s;
    cin>>s;
    if(braces(s))
      cout<<1;
    else
      cout<<0;
    return 0;
  }