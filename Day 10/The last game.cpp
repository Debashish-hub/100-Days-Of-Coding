// The Last Game
// Mathematics marks of 
// N students are arranged in an array and two teachers are forming a team each for Maths Olympiad. 
// They select students turn wise, in each turn, they select a student marks and removes it from the array. 
// This goes on until only one mark is left in the array. Considering teacher1 takes the first turn, 
// can you tell us which mark will be left in the array after 
// N − 1 turns. Initially, there are  N integers written on the board. Each turn a player selects one number 
// and erases it from the board. This continues until there is only one number left on the board, i.e.  N − 1
// turns are made. The first player makes the first move, then players alternate turns.The first player wants to 
// minimize the last number that would be left on the board, while the second player wants to maximize it.
// You want to know what number will be left on the board after N − 1 turns if both players make optimal moves.

#include <bits/stdc++.h>
  using namespace std;
  void sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
      for(int j=0; j<i; j++){
        if(arr[j] > arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
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
      sort(arr,n);
      if(n%2 != 0){
        cout<<arr[(n+1)/2 -1]<<endl;
      }else{
        cout<<arr[n/2 - 1]<<endl;
      }
    }
    return 0;
  }