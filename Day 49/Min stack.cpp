// Min Stack

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.


class MinStack {
    stack<int> st;
    stack<int> min;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(min.empty() || val <= getMin())
            min.push(val);        
    }
    
    void pop() {
        if(st.top() == getMin())
            min.pop();
        st.pop();            
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */