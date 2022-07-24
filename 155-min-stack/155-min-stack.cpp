class MinStack {
    stack<int> stc;
    stack<int> mins;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stc.push(val);
        if( mins.empty() || val<=mins.top()){
            mins.push(val);
        }
    }
    
    void pop() {
        if( stc.top() == mins.top()){
            mins.pop();
        }
        stc.pop();
    }
    
    int top() {
        return stc.top();
    }
    
    int getMin() {
        return mins.top();
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