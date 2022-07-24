class MinStack {
    vector<pair<int,int>> mins;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if( mins.empty()){
            mins.push_back({val,val});
        }
        else{
            mins.push_back( {val, min(val, mins.back().second)});
        }
    }
    void pop() {
        mins.pop_back();
    }
    
    int top() {
        return mins.back().first;
    }
    
    int getMin() {
        return mins.back().second;
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