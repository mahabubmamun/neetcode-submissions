class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();

        stack<int>st;
        vector<int>res;
        for(int i=0;i<size;i++)
        {
            int j=i;
            st.push(1);
            while(j<size && !st.empty())
            {
                st.push(temperatures[j] - temperatures[i]);
                if(st.top() > 0)
                {
                    res.push_back(st.size()-2);
                    while(!st.empty())
                    {
                        st.pop();
                    }
                }
                else
                {
                    j++;
                }
                if(j==size)
                {
                    res.push_back(0);
                    while(!st.empty())
                    {
                        st.pop();
                    }
                }               
            }
            // if(st.top() <= 0)
            // {
            //     res.push_back(0);
            // }

        }
        // res.push_back(0);
        return res;
    }
};
