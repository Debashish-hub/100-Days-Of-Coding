// Compile code
// Let say you are building a compiler. The compiler you are building only understands angular brackets 
// < and >.
// Since you must have already written a program in C, C++ or Java, you know that every opening curly bracket {
//  should have corresponding closing } curly bracket else you get a compilation error. 
// Similary the compiler that you are building will give compilation error if every opening angular bracket 
// < does not have a corresponding > closing bracket. 

// You aks your friends to write a program for this compiler using only angular brackets and they being a good friend 
// have given you few codes. It might happen that if you compile the code it might give an error but if you compile its 
// prefix it might run. Given a code you have to find the length of the longest prefix. In case no such prefix exists just output 
// 0.
// Note: <<><< , >><< will give compilation error, while <>, <><><>, <<<>>> will not.

#include<iostream>
using namespace std;
int top = -1;
void push(string stack[],char value,int n){
    if(top==n-1){
        cout<<"overflow"<<endl;
        return;
    }
    top++;
    stack[top] = value;
}
int find_res(string stack[],int n){
    int open = 0;
    int close = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        if(open==close && stack[i]== ">")
            return res;
        else if(stack[i]=="<"){
            open++;
        }
        else{
            close++;
            if(open==close)
                res = close*2;
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string stack[n];
        char value;
        for(int i=0;i<n;i++){
            cin>>value;
            push(stack,value,n);
       }
        int res = find_res(stack,n);
        cout<<res<<endl;
        top = -1;
    }
    return 0;
  }
  }