//  Design a Stack With Increment Operation

// Design a stack which supports the following operations.

// Implement the CustomStack class:

// CustomStack(int maxSize) Initializes the object with maxSize which is the maximum number of elements in 
// the stack or do nothing if the stack reached the maxSize.
// void push(int x) Adds x to the top of the stack if the stack hasn't reached the maxSize.
// int pop() Pops and returns the top of stack or -1 if the stack is empty.
// void inc(int k, int val) Increments the bottom k elements of the stack by val. If there are less than k 
// elements in the stack, just increment all the elements in the stack.

class CustomStack {
public:
    int max;
    vector<int> v;
    CustomStack(int maxSize) {
        max=maxSize;
    }
    
    void push(int x) {
        if(v.size()<max)
            v.push_back(x);
    }
    
    int pop() {
        if(v.size()==0)
            return -1;
        int x=v.back();
        v.pop_back();
        return x;
    }
    void increment(int k, int val) {
        int x=k;
        if(v.size()<k)
            x=v.size();
        for(int i=0;i<x;i++)
        {
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */