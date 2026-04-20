class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(auto x : tokens)
        {
            if(x == "+" || x == "-" || x == "*" || x == "/")
            {
                int temp_a = st.top();
                st.pop();
                int temp_b = st.top();
                st.pop();

                if(x == "+")
                {
                    st.push(temp_a + temp_b);
                }
                else if(x == "-")
                {
                    st.push(temp_b - temp_a);
                }
                else if(x == "*")
                {
                    st.push(temp_a * temp_b);
                }
                else
                {
                    st.push(temp_b / temp_a);
                }
            }
            else
            {
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};
