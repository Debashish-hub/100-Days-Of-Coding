// Stack Operations
//  Abhishek went for an interview at an IT company. The interviewer asks him to design a Data Structure that performs the Stack 
//  operation like push(), pop() and one more operation getMin(), getMin() function should return the minimum element from the stack.

//  Note: You have to answer the question according to query.
//     You will get four types of query.

// 1. push($x$) - Push element $x$ onto stack.
// 2. pop() - Removes the element on top of the stack.
// 3. top() - Get the top element.
// 4. getMin() - Get the minimum element in the stack.
// Note: The Interviewer did not allow you to use any other data structure except stack.

#include <bits/stdc++.h>
  using namespace std;
  struct MyStack{
    stack<int> s;
    int minEle;
    void getMin(){
        if (s.empty()){
            cout<<-1<<"\n";
            return;
        }
        else
            cout<< minEle << "\n";
    }
    void top(){
        if (s.empty()){
            cout<<-1<<"\n";
            return;
        }
        int t = s.top(); 
        (t < minEle)? cout << minEle<<"\n": cout << t<<"\n";
    }
 
    void pop(){
        if (s.empty()){
            cout<<-1<<"\n";
            return;
        }
        int t = s.top();
        if (t < minEle){
            minEle = 2*minEle - t;
        }
        s.pop();
    }
 
    void push(int x)
    {
        if (s.empty()){
            minEle = x;
            s.push(x);
            return;
        }
        if (x < minEle){
            s.push(2*x - minEle);
            minEle = x;
        }else
           s.push(x);
    }
};
  int main()
  {
    //write your code here
    MyStack s;
    int n;
    cin>>n;
    while(n--){
      int a;
      cin>>a;
      if(a == 1){
        int b; cin>>b;
        s.push(b);
      }else if(a == 2){
        s.pop();
      }else if(a == 3){
        s.top();
      }else if(a == 4){
        s.getMin();
      }
    }
    return 0;
  }