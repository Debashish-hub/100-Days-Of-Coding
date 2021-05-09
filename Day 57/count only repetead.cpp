// Count only Repeated 

// Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single 
// element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated 
// and number of times it is repeated.
// Note: If there's no repeating element, Return {-1,-1}.


// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        //code here
        int low = 0, high = n-1, count = -1,res = -1;
        while(low <= high){
            int midele = (arr[low] + arr[high])/2;
            int mid = (low + high)/2;
            if(arr[mid] == arr[mid + 1]){
                res = arr[mid];
                count = n- (arr[n-1] - arr[0]);
                return make_pair(res,count);
            }else if(midele < arr[mid]){
                low = mid + 1;
            }else{
                high = mid -1;
            }
            
        }
        return make_pair(res, count);
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends