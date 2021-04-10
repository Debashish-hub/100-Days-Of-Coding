// Multiply Strings

// Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, 
// also represented as a string.

// Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

class Solution {
public:
    string multiply(string num1, string num2) {
         string finalstring = "" ;
         int m = num1.size(), n = num2.size();
       
         vector <int> res(m + n);
         
         for ( int i = m - 1 ; i >= 0 ;  i--) {
             for ( int j = n - 1 ; j >= 0 ; j--) {
                 
                 int mul = (num1[i] - '0' ) * (num2[j] -  '0' );
                 
                 int p1 = i + j;
                 int p2 = i + j + 1 ;
                
                 int sum = mul + res[p2];
                 
                 res[p1] += sum/10;   
                 res[p2] = sum% 10;   
            }
        }
         
        for (int num: res) {
            
             char ch=num+'0'; 
             if((finalstring.empty()==false && num==0) || num!=0){
                 finalstring+=ch;   
             }
            
        }
        return finalstring.empty()? "0" : finalstring;
    
    }
};
 