// Digital Root 

// You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its 
// digits until we get a single digit number.

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int digitalRoot(int n)
{
    //Your code here
    int sum = 0, m;
    while(n != 0){
        m = n % 10;
        sum += m;
        n /= 10;
    }
    if(sum >= 0 && sum <= 9)
        return sum;
    else
        return digitalRoot(sum);
}

// { Driver Code Starts.


int main() {
	int T;
	scanf("%d", &T);//taking testcases
	while(T--)
	{
	    int n;
	    scanf("%d", &n);//taking number n
	    
	    //calling digitalRoot() function
	    printf("%d\n", digitalRoot(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends