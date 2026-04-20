class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int max_size = 0;

        if(s.size() == 0)
        {
            return 1;
        }

        for(auto x : s)
        {
            if(mp.find(x) != mp.end())
            {
                int temp_size = mp.size();
                if(temp_size > max_size)
                {
                    max_size = temp_size;
                }
                mp.clear();
                mp[x] = 1;
            }
            mp[x] = 1;
        }
        return max_size;
    }
};
