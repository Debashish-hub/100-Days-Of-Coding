// Equilibrium Point 

// Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.



// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum =0;
        float  c=0;
        for(int i=0; i<n; i++){
            c += a[i];
        }
        
        for(int i=0; i<n; i++){
            if(sum == (c - a[i])/2)
                return i+1;
            if(sum > (c - a[i])/2)
                return -1;
            sum += a[i];
        }
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends