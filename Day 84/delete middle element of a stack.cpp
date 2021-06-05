// Delete middle element of a stack 

// Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional 
// data structure.
// Middle: ceil(size_of_stack/2.0)


// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> ans;
        for(int i=0; i<sizeOfStack; i++){
            int x = s.top();
            s.pop();
            if(i != sizeOfStack/2){
                ans.push(x);
            }
        }
        while(!ans.empty()){
            int a = ans.top();
            ans.pop();
            s.push(a);
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends