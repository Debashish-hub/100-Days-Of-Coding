//Search an element in sorted and rotated array 

//Given a sorted and rotated array A of N distinct elements which is rotated at some point, 
//and given an element K. The task is to find the index of the given element K in the array A.

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
    //code here
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == K)
            return i;
    }
    return -1;
}
