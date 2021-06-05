// Infix to Postfix 
// Easy Accuracy: 49.68% Submissions: 6324 Points: 2
// Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

// Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
// Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
// â€‹Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. 


// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    int precedence(char c){
        if(c == '^'){
            return 3;
        }else if(c == '*' || c == '/'){
            return 2;
        }else if(c == '+' || c == '-'){
            return 1;
        }else if(c == '('){
            return 0;
        }
    }
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        string res = ""; 
        
        stack<char> st; 
        for(int i = 0; i < s.length(); i++)
        {
            if(isalnum(s[i])){
                res += s[i]; 
            }
            else{
                
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    
                    if(s[i] == '('){
                        st.push(s[i]);
                    }
                    
                    else if(s[i] == ')')
                    {
                        while(st.top() != '('){
                            res += st.top(); 
                            st.pop();
                        }
                        st.pop(); 
                    }
                    
                    else if(precedence(s[i]) > precedence(st.top())){
                        st.push(s[i]); 
                    }
                    else if(precedence(s[i]) <= precedence(st.top())){
                        
                        while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                            res += st.top(); 
                            st.pop(); 
                        }
                        st.push(s[i]);
                    }
                }
            }
            
        }
        while(!st.empty()){
            res += st.top(); 
            st.pop(); 
        }
        return res; 
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends