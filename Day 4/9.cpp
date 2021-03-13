// You are given 3 types of chocolates A, B, C with frequencies f A, f B, f C. You need to pack these chocolates in a box. 
// The constraints of the box are as follows: A box should contains exactly 3 chocolates and it should contain atleast 1
// type of chocolate A and 1 type of chocolate B. Like (A,B,C) , (A,A,B), (A,B,B) types of chocolate boxes are allowed. However 
// (C,C,A) , (A,A,A) etc. are not allowed.
// Your aim is to maximize the number of boxes for given fA, fB, fC.
// You would be asked q queries.

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int q; cin>>q;
    while(q--){
      int f_a, f_b, f_c ;
      cin>>f_a>>f_b>>f_c ;
      if(min(f_a, f_b) <= f_c){
        cout<<min(f_a, f_b)<<"\n";
      }
      else{
        int sum = (f_a + f_b + f_c)/3;
        cout<<min(sum, min(f_a, f_b)) <<"\n";
      }
    }
    return 0;
  }