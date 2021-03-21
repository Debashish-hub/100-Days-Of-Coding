// Merge Sort
// PrepBuddy is given an array of integers of size  N.
// He is challenged to sort the array using the Merge Sort algorithm. Please help him implement the merge sort.

#include <bits/stdc++.h>
  using namespace std;
    void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left +1;
    int n2 = right - mid,i,j,k;
    int leftArr[n1], rightArr[n2];
    for(i=0; i<n1; i++)
      leftArr[i] = arr[left + i];
    
    for(i=0; i<n2; i++)
      rightArr[i] = arr[mid + i + 1];
    i=0,j=0,k=left;
    
    while(i<n1 && j<n2){
      if(leftArr[i] <= rightArr[j])
        arr[k++] = leftArr[i++];
      else
        arr[k++] = rightArr[j++];
    }
    while(i<n1)
      arr[k++] = leftArr[i++];
    while(j<n2)
      arr[k++] = rightArr[j++];
  }

  void mergesort(int arr[], int left, int right){
    if(left >= right)
      return;
    int mid = left + (right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1, right);
    merge(arr, left, mid, right);
  }
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      mergesort(arr,0,n-1);
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }