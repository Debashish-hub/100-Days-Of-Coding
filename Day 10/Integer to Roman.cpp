Integer to Roman

class Solution {
public:
    string intToRoman(int num) {
        string ans;
        if(num>=1000)
        {
            int k=num/1000;
            while(k--)
                ans+='M';
            num%=1000;
        }
        if(num>=500)
        {
            if(num>=900)
            {
                ans+="CM";
                num%=900;
            }
            else
            {
                ans+='D';
                num%=500;
            }    
        }
        if(num>=100)
        {
            if(num>=400)
            {
                ans+="CD";
                num%=400;
            }
            else
            {
                int k=num/100;
                while(k--)
                    ans+='C';
                num%=100;
            }    
        }
        if(num>=50)
        {
            if(num>=90)
            {
                ans+="XC";
                num%=90;
            }
            else
            {
                ans+='L';
                num%=50;
            }    
        }
        if(num>=10)
        {
            if(num>=40)
            {
                ans+="XL";
                num%=40;
            }
            else
            {
                int k=num/10;
                while(k--)
                    ans+='X';
                num%=10;
            }    
        }
        if(num>=5)
        {
            if(num==9)
            {
                ans+="IX";
                num%=9;
            }
            else
            {
                ans+='V';
                num%=5;
            }    
        }
        if(num>=1)
        {
            if(num==4)
                ans+="IV";
            else
            {
                while(num--)
                    ans+='I';
            }    
        }
        return ans;
    }
};