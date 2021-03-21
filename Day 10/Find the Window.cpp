// Find the Window
// You are given an array that is not completely sorted but sorting a window in this array can make the whole array sorted. 
// That window could be a complete array as well. So, out of several such parts, you have to find the one with minimum length.

#include <bits/stdc++.h>
  using namespace std;
  
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
      int start,end;
      for(start =0; start<n-1; start++){
        if(arr[start] > arr[start+1])
          break;
      }
      for(end = n-1; end >0; end--){
        if(arr[end] < arr[end-1])
          break;
      }
      int max = INT_MIN, min =INT_MAX;
      for(int i=start; i<=end; i++){
        if(arr[i] > max)
          max = arr[i];
        if(arr[i] < min)
          min = arr[i];
      }
      for(int i=0; i<start; i++){
        if(arr[i] > min)
          start = i;
      }
      for(int i=n-1; i>end; i--){
        if(arr[i] < max)
          end = i;
      }
      cout<<start<<" "<<end<<endl;
    }
    return 0;
  }