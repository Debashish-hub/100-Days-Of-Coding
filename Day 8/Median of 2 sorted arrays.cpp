//Median of 2 Sorted Arrays of Different Sizes 

//Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    // Your code goes here
    int m=array1.size();
    int n=array2.size();
    int a[m+n];
    merge(array1.begin(),array1.end(),array2.begin(),array2.end(),a);
    
    if((m+n)%2!=0){
        return a[(m+n)/2];
    }
    if((m+n)%2==0){
        return float(a[(m+n)/2]+a[(m+n)/2-1])/2;
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i)
            cin>>array1[i];
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i)
            cin>>array2[i];
        cout<<MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends