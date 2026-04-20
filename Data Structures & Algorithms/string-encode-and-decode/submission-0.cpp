class Solution {
public:

    string encode(vector<string>& strs) {
        int size = strs.size();
        
        vector<int>sizes;
        string res = "";

        sizes.push_back(size);
        for(string &st : strs)
        {
            sizes.push_back(st.size());
        }
        for(int sz : sizes)
        {
            res += to_string(sz);
        }
        for(string &st : strs)
        {
            res += st;
        }
        return res;

    }
    vector<string> decode(string s) {
        int size_of_vec = s[0] - '0';
        queue<int>q;
        int i = 1;
        while(size_of_vec != 0)
        {
            q.push(s[i] - '0');
            size_of_vec--;
            i++;
        }
        vector<string>res;
        while(!q.empty())
        {
            string curr = "";
            int temp_size = q.front();
            q.pop();
            while(temp_size != 0)
            {
                curr += s[i];
                temp_size--;
                i++;
            }
            res.push_back(curr);
            curr.clear();
        }
        return res;

    }
};
