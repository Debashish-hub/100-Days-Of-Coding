// Rotate and Find
// We are assuming you have gone through lectures of array rotation till now and you are comfortable with it and you 
// also must have solved good numbers of searching problems. So, we thought why not to combine rotation and searching 
// and create a problem statement for you. So you are given a rotated array 
// A and an integer x, your task is to find the index of x. 

// Oh! One more thing. Before you start thinking of using linear search let me inform you the array is sorted and rotated. 


#include <bits/stdc++.h>
  using namespace std;
  int search(int n, int arr[], int x){
     for(int i=0; i<n; i++){
       if(arr[i] == x){
         return i;
       }
     }
     return -1;
  }
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int n,x; cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      cin>>x;
      cout<<search(n,arr,x)<<endl;
    }
    return 0;
  }