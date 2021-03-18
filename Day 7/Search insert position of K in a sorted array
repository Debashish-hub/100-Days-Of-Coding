//Search insert position of K in a sorted array 

//Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k, the task is to find the index of k, 
//if it’s present in the array Arr[]. Otherwise, find the index where k must be inserted to keep the array sorted.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        for(int i=0; i<N; i++){
            if(Arr[i] >= k){
                return i;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends