// Count Inversions 
// Given an array of integers. Find the Inversion Count in the array. 
// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already 
// sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long mergeSort(long long arr[], long long temp[], long long l, long long r)
    {
        long long m, inv_count = 0;
        if (r > l) {
            m = (r + l)/2 ;
            inv_count += mergeSort(arr, temp, l, m);
            inv_count += mergeSort(arr, temp, m + 1, r);
            inv_count += merge(arr, temp, l, m + 1, r);
        }
        return inv_count;
    }
    long long merge(long long arr[], long long temp[], long long l, long long m, long long r)
    {
        long long i, j, k;
        long long inv_count = 0;
     
        i = l; 
        j = m; 
        k = l; 
        while ((i <= m - 1) && (j <= r)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            }
            else {
                temp[k++] = arr[j++];
                inv_count = inv_count + (m - i);
            }
        }
        while (i <= m - 1)
            temp[k++] = arr[i++];
        while (j <= r)
            temp[k++] = arr[j++];
        for (i = l; i <= r; i++)
            arr[i] = temp[i];
     
        return inv_count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        mergeSort(arr, temp, 0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends