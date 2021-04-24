// Convert to postfix
// You are given an algebraic expression and you have to convert that into postfix notation.

// Please ensure to keep in mind the priority of operators while doing the conversion. The expression consists of 
// binary operators +, -, *, /, ^ (priority from the lowest to the highest) and brackets ( ). Operands will be letters from 'a'...'z'.

#include <bits/stdc++.h>
  using namespace std;
  int prec(char c){
    if(c == '^')
      return 5;
    else if(c == '/')
      return 4;
    else if(c == '*')
      return 3;
    else if(c == '-')
      return 2;
    else if(c == '+')
      return 1;
    else
      return -1;
  }
  void topostfix(string s) {
 
    stack<char> st; 
    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z')
            result += c;
        else if(c == '(')
            st.push('(');
        else if(c == ')') {
            while(!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.push(c);
        }
    }
    while(!st.empty()) {
        char temp = st.top();
        st.pop();
        result += temp;
    }
 
    cout << result << endl;
}
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      string s;
      cin>>s;
      topostfix(s);
    }
    return 0;
  }