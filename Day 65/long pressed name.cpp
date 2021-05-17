// Long Pressed Name

// Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, 
// and the character will be typed 1 or more times.

// You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, 
// with some characters (possibly none) being long pressed.


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.length(), m = typed.length();
        int i=0, j=0;
        if(m < n) return false;
        while(j<m){
            if(name[i] == typed[j]){
                i++; j++;
            }else if(i>0 && name[i-1] == typed[j]){
                j++;
            }else{
                return false;
            }
            
        }
        if(i == n)
            return true;
        return false;
    }
};