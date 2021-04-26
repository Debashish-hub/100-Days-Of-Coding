// Tower Of Hanoi 

// The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move 
// the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. 
// You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
// Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, 
// all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided 
// link to get a better clarity about the puzzle.

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        int c=0;
        if(N==1){
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            c++;
            return c;
        }
        c += toh( N-1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        c += toh( N-1, aux, to, from);
        return c+1;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends