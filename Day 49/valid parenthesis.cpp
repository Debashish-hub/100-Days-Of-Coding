// Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
 



class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        if(l % 2 != 0){
            return false;
        }
        stack<char> st;
        char c;
        for(int i=0; i<l; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;   
            }
            if(st.empty()){
                
                return  false;
            }
            
            switch(s[i]){
                case ')':
                    c = st.top();
                    st.pop();
                    if(c == '[' || c == '{'){
                        return false;
                    }
                    break;
                case '}':
                    c = st.top();
                    st.pop();
                    if(c == '[' || c == '('){
                        return false;
                    }
                    break;
                case ']':
                    c = st.top();
                    st.pop();
                    if(c == '(' || c == '{'){
                        return false;
                    }
                    break;
            }
        }
        return st.empty();
    }
};






