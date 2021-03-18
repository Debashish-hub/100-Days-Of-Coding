// Maximize the Problems
// You are given n problems numbered 1 to n where ith problem requires 5*i time to solve. You are also given an integer  k .  You need to solve the maximum number of problems such that the time required to solve them is less than or equal to 
// 240 − k.

#include <bits/stdc++.h>
  using namespace std;
  int search(int n, int k){
    int r = 240-k, s=0;
    for(int i=1; i<=n; i++){
      s += 5*i;
      if(s <= k && r-s < 5*(i+1))
        return i;
    }
  }
  int main()
  {
    //write your code here
    int n,k;
    cin>>n>>k;
    cout<<search(n,k);
    return 0;
  }
