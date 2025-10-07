class MyQueue {
public:
    stack<int> st,st2;
    MyQueue() {
        
    }
    void push(int x) {
        while(st.size())
        {
            st2.push(st.top());
            st.pop();
        }
        st.push(x);
        while(st2.size()){
            st.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */