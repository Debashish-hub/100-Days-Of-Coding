//Bitonic Point 

//Given an array Arr of N elements which is first increasing and then may be decreasing, 
//find the maximum element in the array.
//Note: If the array is increasing then just print then last element will be the maximum value.


#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int res=arr[n-1];
        for(int i=0;i<n;i++){ 
            if(arr[i]>res){
                res = max(res,arr[i]);
            }
        }
        return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends