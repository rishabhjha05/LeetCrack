class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st;
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int min=INT_MAX;
        stack<int> temp;
        while(st.size()>0)
        {
            if(min>st.top())
                min=st.top();
            temp.push(st.top());
            st.pop();
        }
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
        return min;
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