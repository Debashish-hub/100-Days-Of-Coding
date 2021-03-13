// Missing in AP
// Arithmetic expression was an interesting concept that we learned in maths. What about solving a problem around that. 
// Let's say I give you N elements and I tell you that the elements are representing AP(Arithmetic Progression). 
// But you realize that one element from this AP is missing and you want to find out the missing element. 
// It is easy to find out the missing one for a human but can you write down a program that does this task of 
// finding a missing element from the AP?

#include <bits/stdc++.h>
  using namespace std;
  int search(int n, int arr[]){
    for(int i=2; i<n; i++){
      int d = arr[1] - arr[0];
      if(arr[i] - arr[i-1] > d)
        return arr[i-1] + d;
      if(arr[i] - arr[i-1] < d)
        return arr[0] +arr[i] - arr[i-1];
    }
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
      cout<<search(n,arr)<<endl;
    }
    return 0;
  }