class Solution {
public:

    string encode(vector<string>& strs) {
        int size = strs.size();

        string res = "";
        int i = 0;
        while(size != 0)
        {
            res += to_string(strs[i].size());
            res += '#';
            res += strs[i];
            i++;
            size--;
        }
        res += ';';
        
        // vector<int>sizes;
        // string res = "";

        // sizes.push_back(size);
        // for(string &st : strs)
        // {
        //     sizes.push_back(st.size());
        // }
        // for(int sz : sizes)
        // {
        //     res += to_string(sz)+ ',';
        // }
        // res += '#';
        // for(string &st : strs)
        // {
        //     res += st;
        // }
        return res;

    }
    vector<string> decode(string s) {
        vector<string>res;
        int i = 0;

        while(s[i] != ';')
        {
            string curr_size_in_str = "";
            while(s[i] != '#')
            {
                // string curr_size_in_str = "";
                curr_size_in_str += s[i];
                i++;
            }
            int curr_size_in_int = stoi(curr_size_in_str);
            i = i+1;
            string curr_str = "";
            while(curr_size_in_int != 0)
            {
                curr_str += s[i];
                curr_size_in_int--;
                i++;
            }
            res.push_back(curr_str);
        }

        // while(s[i] != '#')
        // {
        //     string curr_size_in_str = "";
        //     curr_size_in_str += s[i];
        //     i++;
        //     curr_size_in_int = stoi(curr_size_in_str);
        //     i = i+1;
        // }

        // int size_of_vec = s[0] - '0';
        // queue<int>q;
        // int i = 1;
        // while(size_of_vec != 0)
        // {
        //     q.push(s[i] - '0');
        //     size_of_vec--;
        //     i++;
        // }
        // vector<string>res;
        // while(!q.empty())
        // {
        //     string curr = "";
        //     int temp_size = q.front();
        //     q.pop();
        //     while(temp_size != 0)
        //     {
        //         curr += s[i];
        //         temp_size--;
        //         i++;
        //     }
        //     res.push_back(curr);
        //     curr.clear();
        // }
        return res;

    }
};
