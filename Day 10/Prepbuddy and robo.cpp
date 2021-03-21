// PrepBuddy and Robo
// PrepBuddy has built a robot called ROBO. We give an unordered set of digits  (for example (4321)) to ROBO and 
// ask if it is possible to arrange those digits in ordered fashion (1234), but the catch is digits can be arranged 
// in this fashion only if digits are continuous.

// Given a set of digits print 'YES' if the arrangement is possible else print 'NO'.

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int num = n,size=0;
      while(num != 0){
        size++;
        num /=10;
      }
      int arr[size];
      for(int i=0; i<size; i++){
        arr[i] = n %10;
        n = n/10;
      }
      sort(arr, arr+size);
      int a = 0;
      for(int i=0; i<size-1; i++){
        if(arr[i+1] != arr[i]+1){
          a = 1;
          break;
        }
          
      }
      if(a == 0){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
  }