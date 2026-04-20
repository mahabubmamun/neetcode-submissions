class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        stack<char>st;
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else if(c == ')' || c=='}' || c==']')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top() == mp[c])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
