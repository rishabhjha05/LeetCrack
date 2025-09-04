class MinStack {
public:
    vector<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int i=0;i<st.size();i++){
            if(min>st[i])
                min=st[i];
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