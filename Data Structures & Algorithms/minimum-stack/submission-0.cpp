class MinStack {
public:
    stack<int>st;
    MinStack() {
        
    }
    
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
        stack<int>temp;
        int tp = INT_MAX;

        while(!st.empty())
        {
            if(st.top() <= tp)
            {
                tp = st.top();
                // temp.push(tp);
                // st.pop();
            }
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return tp;
    }
};
