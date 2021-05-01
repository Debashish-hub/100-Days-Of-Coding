// Subset sum problem
// return the no of subsets of an array having sum = sum.

#include <iostream>
#include <limits.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}


int main() {
    
    	int n = 3, arr[]= {10, 20, 15}, sum = 25;
    	
    	cout<<countSubsets(arr, n, sum);
    	
    	return 0;
}