// Jump Game 
// Medium Accuracy: 56.87% Submissions: 1766 Points: 4
// Given an positive integer N and a list of N integers A[]. 
// Each element in the array denotes the maximum length of jump you can cover. 
// Find out if you can make it to the last index if you start at the first index of the list.
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        int last = N-1;
    int flag = 1;
    for(int i=N-2;i>=0;i--){
        if(A[i]>=last-i){
            flag = 1;
            last = i;
        }
        else flag =0;
    }
    return flag;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends