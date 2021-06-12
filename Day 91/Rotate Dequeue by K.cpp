// Rotate Deque By K 

// Given a Deque deq of size N containing non-negative integers and a positive integer K, the task is to 
// rotate elements of the deque by K places in a circular fashion. There will be two rotations which you have to 
// implement depending on the type rotating query. Below is the description of rotating type and value of K for 
// which you have to rotate in circular way:
// Type-1. right_Rotate_Deq_ByK(): this function should rotate deque by K places in a clockwise fashion.
// Type-2. left_Rotate_Deq_ByK(): this function should rotate deque by K places in an anti-clockwise fashion.

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Function to rotate deque by k places in anti-clockwise direction.
void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // your code here
    while(k--){
        deq.push_back(deq.front());
        deq.pop_front();
    }
}

//Function to rotate deque by k places in clockwise direction.
void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // your code here
    while(k--){
        deq.push_front(deq.back());
        deq.pop_back();
    }
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> deq;
        for(int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            deq.push_back(val);
            
        }
        int rotateQuery, k;
        cin>>rotateQuery>>k;
        
        
        
        if(rotateQuery == 1)
            right_Rotate_Deq_ByK(deq, n, k);
            
        else left_Rotate_Deq_ByK(deq, n, k);
        
        
        for(auto itr = deq.begin(); itr != deq.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends