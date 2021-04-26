// Possible Words From Phone Digits 

// Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ], 
// the task is to list all words which are possible by pressing these numbers.

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    void generateWords(int a[], int N, vector<string> &res)
    {
        string alpha[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
        static string curr;
        static int index = 0;
    
        if(N == 0){
            res.push_back(curr);
            return;
        }
    
        for(int i = 0; i < alpha[a[index]].size() ;i++){
            curr += alpha[a[index]][i];
            index++;
            
            generateWords(a, N-1, res);
            
            index--;
            curr.erase(curr.begin() + curr.size() - 1);
        }
    }

    public:
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> res;
        generateWords(a, N, res);
        
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends