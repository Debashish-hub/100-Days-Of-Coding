//  Merge three sorted arrays 

// Given three sorted arrays A, B and C of size N, M and P respectively. The task is to merge them into a single array 
// which must be sorted in increasing order.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends

class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        vector<int> ans;
        int a = A.size(), b = B.size(), c = C.size();
        int i = 0, j = 0, k = 0, x, y, z, d;
        while(i < a || j < b || k < c){
            x = (i<a) ? A[i] : INT_MAX;
            y = (j<b) ? B[j] : INT_MAX;
            z = (k<c) ? C[k] : INT_MAX;
            d = min(min(x,y),z);
            ans.push_back(d);
            if(i<a && d==A[i]) 
                i++;
            else if(j<b && d==B[j]) 
                j++;
            else 
                k++;
        }
        return ans;
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends