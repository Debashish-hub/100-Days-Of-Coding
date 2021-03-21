// Find the misplaced elements
// Arnab is given an array of integers of size N. His teacher asked Arnab to sort the array but as usual, 
// Arnab did not do his task. So now the teacher will cut his marks for each misplaced element. 
// Arnab wants to know how much marks he will lose.

#include <bits/stdc++.h>
  using namespace std;
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left +1;
    int n2 = right - mid,i,j,k;
    int leftArr[n1], rightArr[n2];
    for(i=0; i<n1; i++)
      leftArr[i] = arr[left + i];
    
    for(i=0; i<n2; i++)
      rightArr[i] = arr[mid + i + 1];
    i=0,j=0,k=left;
    
    while(i<n1 && j<n2){
      if(leftArr[i] <= rightArr[j])
        arr[k++] = leftArr[i++];
      else
        arr[k++] = rightArr[j++];
    }
    while(i<n1)
      arr[k++] = leftArr[i++];
    while(j<n2)
      arr[k++] = rightArr[j++];
  }

  void mergesort(int arr[], int left, int right){
    if(left >= right)
      return;
    int mid = left + (right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1, right);
    merge(arr, left, mid, right);
  }
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      int n,c=0; cin>>n;
      int arr[n],temp[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
        temp[i] = arr[i];
      }
      mergesort(arr,0,n-1);
      for(int i=0; i<n; i++){
        if(arr[i] != temp[i])
          c++;
      }
      cout<<c<<endl;
    }
    return 0;
  }