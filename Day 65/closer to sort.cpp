// Closer to sort 

// Given an array arr[](0-based indexing) of N integers which is closer sorted (defined below) and an element x. 
// The task is to find the index of element x if it is present. If not present, then print -1.
// Closer Sorted: The first array is sorted, but after sorting some elements are moved to either of the adjacent positions, 
// i.e, maybe to the arr[i+1] or arr[i-1].


// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
        int low = 0, high = n-1, mid;
        while(low < high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                return mid;
            }
            if(arr[mid+1] == x && mid < n){
                return mid+1;
            }
            if(arr[mid-1] == x && mid > 0){
                return mid-1;
            }
            if(arr[mid] > x){
                high = mid-1;
            }
            if(arr[mid] < x){
                low = mid+1;
            }
        }
        return -1;
    }
};


// { Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}  // } Driver Code Ends