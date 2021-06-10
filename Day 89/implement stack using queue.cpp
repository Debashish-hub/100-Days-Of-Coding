// Implement Stack using Queues

// Implement a last in first out (LIFO) stack using only two queues. The implemented stack should support 
// all the functions of a normal queue (push, top, pop, and empty).

// Implement the MyStack class:

// void push(int x) Pushes element x to the top of the stack.
// int pop() Removes the element on the top of the stack and returns it.
// int top() Returns the element on the top of the stack.
// boolean empty() Returns true if the stack is empty, false otherwise.
// Notes:

// You must use only standard operations of a queue, which means only push to back, peek/pop from front, 
// size, and is empty operations are valid.
// Depending on your language, the queue may not be supported natively. You may simulate a queue using a 
// list or deque (double-ended queue), as long as you use only a queue's standard operations.


class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> a;
    queue<int> b;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        b.push(x);
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        }
        swap(a,b);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = a.front();
        a.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return a.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty(); 
 */
