// Get min at pop 

// Now, we'll try to solve a famous stack problem.
// You are given an array A of size N. You need to first push the elements of the array into a stack and then 
// print minimum in the stack at each pop.


// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> s;
   s.push(arr[0]);
   for(int i=1; i<n; i++){
       if(s.top() >= arr[i]){
           s.push(arr[i]);
       }else{
           s.push(s.top());
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends