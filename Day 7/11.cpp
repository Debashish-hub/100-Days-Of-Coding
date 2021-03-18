// Trapping Rain Water 
// Medium Accuracy: 49.62% Submissions: 37005 Points: 4
// Given an array arr[] of N non-negative integers representing the height of blocks. 
// If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        if(n < 3){
            return 0;
        }
        int r = n-1;
        int l = 0;
        int lmax = 0;
        int rmax = 0;
        int ans = 0;
        while(l <= r){
            if(arr[l] <= arr[r]){
                if(lmax < arr[l]) 
                    lmax = arr[l];
                else 
                    ans+= lmax - arr[l];
                    l++;
            }else{
                if(rmax < arr[r]) 
                    rmax = arr[r];
                else 
                    ans+= rmax - arr[r];
                    r--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends