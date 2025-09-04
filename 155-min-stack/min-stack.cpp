class MinStack {
public:
    stack<int> st;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(min.size()==0 || min.top()>=val)
            min.push(val);
        st.push(val);
        cout<<"push\n";
    }
    
    void pop() {
        if(min.top()==st.top())
            min.pop();
        st.pop();
        cout<<"pop\n";
    }
    
    int top() {
        return st.top();
        cout<<"top\n";
    }
    
    int getMin() {
        return min.top();
        cout<<"getMin\n";
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