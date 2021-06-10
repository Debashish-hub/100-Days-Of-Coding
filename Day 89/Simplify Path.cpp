// Simplify Path

// Given a string path, which is an absolute path (starting with a slash '/') to a file or directory 
// in a Unix-style file system, convert it to the simplified canonical path.

// In a Unix-style file system, a period '.' refers to the current directory, a double period '..' 
// refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. 
// For this problem, any other format of periods such as '...' are treated as file/directory names.

// The canonical path should have the following format:

// The path starts with a single slash '/'.
// Any two directories are separated by a single slash '/'.
// The path does not end with a trailing '/'.
// The path only contains the directories on the path from the root directory to the target file or directory 
// (i.e., no period '.' or double period '..')
// Return the simplified canonical path.

class Solution {
public:
    string simplifyPath(string path) {
        int n=path.length();
        stack<string>s;
                
        if(path[n-1]!='/') 
            path+="/", ++n;
            
        int i=1; 
        string ans="";
        string temp="";
        while(i<n){
            
            if(path[i]=='/'){
                
                if(temp=="" || temp=="."){
                    // ignore
                }
                else if(temp==".."){
                    if(!s.empty()) s.pop();                                                  
                }
                else{
                    s.push(temp);
                }
                
                temp=""; 
            }
            else{
                temp.push_back(path[i]);
            }
            
            ++i; 
        }
        
        while(!s.empty()){
            ans="/"+s.top()+ans;
            s.pop();
        }
        
        if(ans.length()==0) 
            ans="/"; 
        
        return ans;
    }
};