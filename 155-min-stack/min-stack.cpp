class MinStack {
public:
    MinStack() {
        
    }
    stack<long long> st;
    long long min=LLONG_MAX;
    void push(int val) {
        long long vl=(long long)val;
        if(st.size()==0)
        {
            st.push(vl);
            min=vl;
        }
        else if(val>=min)
            st.push(vl);
        else
        {
            st.push(2*vl-min);
            min=vl;
        }
    }
    void pop() {
        if(st.top()<min)
            min=2*min-st.top();
        st.pop();
    }
    
    int top() {
        if(st.top()<min)
            return (int)min;
        return (int)st.top();
    }
    
    int getMin() {
        return (int)min;
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