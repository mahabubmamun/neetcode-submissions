class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>us;
        int l = 0;
        int max_size = 0;

        for(int r=0;r<s.size();r++)
        {
            while(us.find(s[r]) != us.end())
            {
                us.erase(s[l]);
                l++;
            }
            us.insert(s[r]);
            max_size = max(max_size, r-l+1);
        }
        return max_size;

    }
};
