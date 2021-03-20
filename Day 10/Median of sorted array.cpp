// Median of Sorted Array

// Sorting is another very important concept in competitive programming. Many of the problems can be solved easily if 
// the elements are arranged in sorted order. We are going to solve one such problem. 
// We all have studied the median in our schools, it is a simple concept. Let's say we have N
// numbers arranged in sorted order. Median is nothing but the mid element in case of an odd number of 
// elements and in case of even number of elements it is the average of the two mid elements. To keep your task simple, we have kept N
// as odd for you. So, your task is to find the median among N elements.

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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<(arr[(n+1)/2 -1]);
    return 0;
  }