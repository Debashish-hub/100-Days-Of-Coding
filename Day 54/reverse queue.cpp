// Reverse the Queue

// You are given N numbers, and the task is to input these numbers in a queue and then using another empty queue reverse 
// the original queue. (You have to use an empty queue to reverse the original queue, i.e you are not allowed to use the 
// third queue to store the reversed elements).


#include <bits/stdc++.h>
  using namespace std;
  
  void reverse(queue<int> q){
      int s = q.size();
    
      queue<int> ans;
    
      for (int i = 0; i < s; i++) {
          for (int j = 0; j < q.size() - 1; j++) {
              int x = q.front();
              q.pop();
              q.push(x);
          }
          ans.push(q.front());
          q.pop();
      }
      while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
      }
      cout<<endl;
  }
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      queue<int> q,a;
      for(int i=0; i<n; i++){
        int ele; cin>>ele;
        q.push(ele);
      }
       reverse(q);
      
    }
    return 0;
  }