// Peak House
// There is a society in Gurgaon where everyone thinks that they have a taller house than their neighbors.  
// Consider all the house are in the same line, so everyone will have two neighbors on their left and right except the 
// corner ones who have just one neighbor. Now you are given 
// the task of giving the position of one such house which satisfies this condition of being taller than their neighbors.

#include <bits/stdc++.h>
  using namespace std;
  int search(int arr[], int n){
    for(int i=0; i<n; i++){
      if(i == 0){
        if(arr[i] > arr[i+1])
          cout<<i<<" ";
      }else if(i==n-1){
        if(arr[i] > arr[i-1])
          cout<<i<<" ";
      }else{
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
          cout<<i<<" ";
      }
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
      search(arr,n);
    }
    return 0;
    
  }
