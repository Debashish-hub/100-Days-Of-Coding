// Sort the Numbers

// Some problems are like a mirage. They seem to have a different solution when you see it first but as you deep dive 
// you realize the solution is something else.
// Next, we are going to solve one such problem.
// You are given an array consisting of 0's, 1's and 2's. Your task is to sort the array.

#include <bits/stdc++.h>
  using namespace std;
  void sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
      for(int j=0; j<i; j++){
        if(arr[j] > arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
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
      sort(arr,n);
    }
    return 0;
  }