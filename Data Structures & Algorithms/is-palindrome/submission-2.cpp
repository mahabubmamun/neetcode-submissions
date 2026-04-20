class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>new_str;
        for(char c : s)
        {
            if(isalpha(c))
            {
                new_str.push_back(tolower(c));
            }
        }
        int size = new_str.size();
        if(size % 2 != 0)
        {
            int l = size/2;
            new_str.erase(new_str.begin() + l);
            size = new_str.size();
        }

        stack<char>st;
        for(int i=0;i<size/2;i++)
        {
            st.push(new_str[i]);
        }
        for(int i=size/2;i<size;i++)
        {
            if(st.top() != new_str[i])
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        return true;



        // int i=0, j=size-1;
        // while(i < j)
        // {
        //     if(new_str[i] == new_str[j])
        //     {
        //         i++;
        //         j--;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};
