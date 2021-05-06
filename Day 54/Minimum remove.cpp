// Minimum Remove

// You are given the number of vertices(V) and the number of edges(E) of an undirected graph, 
// the task is to print the count of the minimum number of edges that must be removed from the graph to break all of its cycles.

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int v,e;
      cin>>v>>e;
      cout<<e-v+1<<endl;
    }
    return 0;
  }