// Find triplets with zero sum 

// Given an array of integers. Check whether it contains a triplet that sums up to zero. 

// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        if(n <= 2){
            return false;
        }
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            if(i>0 && arr[i] == arr[i-1]){
                continue;
            }
            int t = 0 - arr[i], l=i+1, h=n-1;
            while(l<h){
                if(arr[l] + arr[h] > t){
                    h--;
                }else if(arr[l] + arr[h] < t){
                    l++;
                }else{
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends