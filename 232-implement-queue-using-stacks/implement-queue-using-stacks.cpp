class MyQueue {
    public:     
    stack<int> st, st2;
    MyQueue()
    {
    }
    void push(int x)
    {
        st.push(x);
    }
    int pop()
    {
        int ans=-1;
        while (st.size())
            st2.push(st.top()), st.pop();
        if (st2.size())
            ans=st2.top(),st2.pop();
        while (st2.size())
            st.push(st2.top()),st2.pop();
        return ans;
    }
    int peek()
    {
        int ans=-1;
        while (st.size())
            st2.push(st.top()), st.pop();
        if (st2.size())
            ans=st2.top();
        while (st2.size())
            st.push(st2.top()),st2.pop();
        return ans;
    }
    bool empty()
    {
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