// Closet 0s 1s and 2s 

// Given an array of 0s, 1s, and 2s. Arrange the array elements such that all 0s come first, followed by all the 1s and then, all the 2s.

// Note: Do not use the inbuilt sort function.

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void swap(int &a, int &b){
        int t= a;
        a = b;
        b = t;
    }
    void segragate012(int arr[], int N)
    {
        // Your Code Here
        int low =0, mid = 0, high = N-1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[mid] , arr[low]);
                low++; mid++;
            }else if(arr[mid] == 2){
                swap(arr[mid], arr[high]);
                high--;
            }else{
                mid++;
            }
        }
    }
};

// { Driver Code Starts.
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        Solution ob;
        ob.segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}
  // } Driver Code Ends