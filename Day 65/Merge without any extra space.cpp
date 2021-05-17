// Merge Without Extra Space 

// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without 
// using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution{
    public:
        //Function to merge the arrays.
        void swap(long long &a, long long &b){
            int t = a;
            a = b;
            b = t;
        }
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int x = n-1, y=0;
            while(x >= 0 && y <= m-1){
                if(arr1[x] > arr2[y]){
                    swap(arr1[x], arr2[y]);
                    x--;
                    y++;
                }else{
                    x--;
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends