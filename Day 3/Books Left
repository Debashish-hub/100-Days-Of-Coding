// Books Left

// Bob has recently got his new collection of novels. He arranges all the books on a shelf. 
// Because of his crazy rules, he only reads a book from one of the ends of the shelf. 
// Thus, each book Bob reads is either leftmost or rightmost book from the shelf. Bob cannot read a book if it has more than K
// chapters, again a crazy rule. When Bob has read a book, he removes it from the shelf. 
// Bob stops when he is unable to read any book from any end of the shelf. How many books are still present on the shelf?

#include <bits/stdc++.h>
  using namespace std;
  int search(int n, int k, int arr[]){
    int count = 0;
    for(int i=0; i<n; i++){
      if(arr[i] <= k)
        count++;
      else
        break;;
    }
    for(int i=n-1; i>=0; i--){
      if(arr[i] <= k)
        count++;
      else
        break;;
    }
    if(count > n){
      return 0;
    }else{
      return n-count;
    }
  }
  int main()
  {
    //write your code here
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    cout<<search(n,k,arr);
    return 0;
  }
