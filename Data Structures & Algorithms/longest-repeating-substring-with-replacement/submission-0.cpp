class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>mp;
        int size = s.size();

        for(auto x : s)
        {
            mp[x]++;
        }
        auto it = mp.begin();
        int first_size = it->second;
        int res_1 = min(size-first_size, k);
        int res_2 = first_size + res_1;
        return res_2;
    }
};
