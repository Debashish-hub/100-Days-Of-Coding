// Quick Sort
// PrepBuyddy is given an array of integers of size  N. He is challenged to sort the array using the QuickSort algorithm.

// Please help him implement quicksort.

#include <bits/stdc++.h>
  using namespace std;
  int partition(int arr[], int low,int high){
    int pivot = arr[high], i=low-1,temp;
    for(int j=low; j<=high-1; j++){
      if(arr[j] <= pivot){
        i++;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
  }
  void quicksort(int arr[], int low, int high){
    if(low >= high)
      return;
    int pivot = partition(arr,low,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1, high);
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
      quicksort(arr,0,n-1);
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }