class MinStack {
public:
    stack<int>st;
    stack<int>aux;
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty() or (val <= getMin())) {
            st.push(val);
            aux.push(val);
        }
        else {
            st.push(val);
            aux.push(getMin());
        }
    }
    
    void pop() {
        if (!st.empty()) {
            st.pop();
            aux.pop();
        }
    }
    
     int top() {
        if (!st.empty()) {
            return st.top();
        }
        return INT_MAX;
    }
    
     int getMin() {
        if (!aux.empty()) {
            return aux.top();    
        }
        return INT_MIN;
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