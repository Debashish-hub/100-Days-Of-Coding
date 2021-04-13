class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        
        string s="";
          
        while(i>=0  || j>=0 ){
            int sum=0;
            if(i>=0){
                sum=sum+int(a[i])-'0';
                i--;
            }
            if(j>=0){
                sum=sum+int(b[j])-'0';
                    j--;
            }
            sum+=carry;
            int x=sum%2;
            s+=to_string(x);
            carry=sum/2;
        }
        s =(carry==0)? s: s+='1';
        reverse(s.begin(),s.end());
        return s;
    }
};