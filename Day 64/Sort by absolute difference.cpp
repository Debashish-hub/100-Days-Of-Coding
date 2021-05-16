// Sort by Absolute Difference 

// Given an array of N elements and a number K. The task is to arrange array elements according to the absolute difference with K, 
// i. e., element having minimum difference comes first and so on.
// Note : If two or more elements are at equal distance arrange them in same sequence as in the given array.


int i = l;
        int j = mid+1;
        int res[r-l+1];
        int res1[r-l+1];
        
        int idx = 0;
        while (i<=mid && j<=r) {
            if (brr[i]<=brr[j]) {
                res[idx] = arr[i];
                res1[idx] = brr[i]; 
                idx++;
                i++;
            }
            else {
                res[idx] = arr[j]; 
                res1[idx] = brr[j];
                idx++;
                j++;
            }
        }
        while (i<=mid) {
            res[idx] = arr[i]; 
            res1[idx] = brr[i];
            idx++;
            i++;
        }
        while (j<=r) {
            res[idx] = arr[j]; 
            res1[idx] = brr[j];
            idx++;
            j++;
        }
    
        for (int i=0; i<(r-l+1); ++i) {
            arr[i+l] = res[i];
            brr[i+l] = res1[i];
        }
    }
    
    
    void mergeSort(int arr[], int brr[], int l, int r) {
        int mid = l + (r-l)/2;
    
        if (l<r) {
            mergeSort(arr, brr, l, mid);
            mergeSort(arr, brr, mid+1, r);
            merge(arr, brr, l, mid, r);
        }
    }
    
    
    void sortABS(int A[],int N, int k)
    {
       int B[N];
    
        for (int i=0; i<N; ++i) {
            B[i] = abs(A[i]-k);
        }
        mergeSort(A, B, 0, N-1);
    }