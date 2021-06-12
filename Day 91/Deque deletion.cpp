// Deque deletion 

// Given a Deque dqe of size N containing non-negative integers.

// Complete below functions depending type of query as mentioned and provided to you (indexing starts from 0):
// 1. eraseAt(X): this function should remove the element from specified position X in deque.
// 2. eraseInRange(start, end): this function should remove the elements in range start (inclusive), 
// end (exclusive) specified in the argument of the function.
// Note: If start is equal to end then simply return.
// 3. eraseAll(): remove all the elements from the deque.

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Function to erase the element from specified position X in deque.
void eraseAt(deque <int> &deq, int X)
{
    auto it = deq.begin();
    advance(it, X);
    deq.erase(it);
}

void eraseInRange(deque<int> &deq, int start, int end)
{
    if(start == end)
        return;
    auto startIt = deq.begin();
    advance(startIt, start);
    auto endIt = deq.begin();
    advance(endIt, end);
    deq.erase(startIt, endIt);
    
}

void eraseAll(deque<int> &deq)
{
   deq.clear();
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
        
        int eraseQuery;
        cin>>eraseQuery;
        
        if(eraseQuery == 1)
        {
            int pos;
            cin>>pos;
            eraseAt(deq, pos);
        }
        else if(eraseQuery == 2)
        {
            int start, end;
            cin>>start>>end;
            eraseInRange(deq, start, end);
        }
        else
        {
            eraseAll(deq);
            
        }
        
        
        if(deq.empty())
            cout << "Empty";
        else
            {for(auto itr = deq.begin(); itr != deq.end(); itr++)
                cout << *itr << " ";}
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends