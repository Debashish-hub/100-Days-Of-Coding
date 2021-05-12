// Defanging an IP Address

// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".


class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(int i=0; i<address.length(); i++){
            if(address[i]=='.'){
                s += "[.]";
            }
            else{
                s += address[i];
            }
        }
        return s;
    }
};


        