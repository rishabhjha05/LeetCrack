class MyQueue {
public:
    
    stack<int>
        st, st2;
    MyQueue()
    {
    }
    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        while (st.size() != 1)
        {
            st2.push(st.top());
            st.pop();
        }
        int x = st.top();
        st.pop();
        while (st2.size())
        {
            st.push(st2.top());
            st2.pop();
        }
        return x;
    }

    int peek()
    {
        
        while (st.size() != 1)
        {
            st2.push(st.top());
            st.pop();
        }
        int x = st.top();
        while (st2.size())
        {
            st.push(st2.top());
            st2.pop();
        }
        return x;
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