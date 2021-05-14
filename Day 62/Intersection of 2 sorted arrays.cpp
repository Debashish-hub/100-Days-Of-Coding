// Intersection of two sorted arrays 

// The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
// Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection


// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
        vector<int> ans;
        int i=0, j=0;
        while(i<N && j<M){
            if(i>0 && arr1[i] == arr1[i-1]){
                i++;
            }
            if(j>0 && arr2[j] == arr2[j-1]){
                j++;
            }
            if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
                i++; j++;
            }else if(arr1[i] > arr2[j]){
                j++;
            }else{
                i++;
            }
        }
        return ans;
    }

};

// { Driver Code Starts.
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
  // } Driver Code Ends