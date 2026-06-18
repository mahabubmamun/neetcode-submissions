class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int num : nums)
        {
            mp[num]++;
        }

        vector<pair<int,int>>p;
        for(const auto & i : mp)
        {
            p.push_back({i.second, i.first});
        }
        sort(p.rbegin(), p.rend());

        vector<int>result;
        for(int i=0;i<k;i++)
        {
            result.push_back(p[i].second);
        }
        return result;
    }
};
