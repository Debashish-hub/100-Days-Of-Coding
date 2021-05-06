// Enqueue and Dequeue

// Given N numbers, your task is to implement Enqueue and Dequeue operation of the Queue Data structure.


#include <bits/stdc++.h>
  using namespace std;
  void printQueue(queue<int> q)
  {
  	while (!q.empty()){
  		cout<<" "<<q.front();
  		q.pop();
  	}
  	cout<<endl;
  } 
  int main()
  {
    //write your code here
    queue<int> q;
    int n; cin>>n;
    for(int i=0; i<n; i++){
      int ele; cin>>ele;
      q.push(ele);
      printQueue(q);
    }
    while(!q.empty()){
      q.pop();
      printQueue(q);
    }
    return 0;
  }