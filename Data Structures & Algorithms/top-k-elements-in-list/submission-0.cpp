class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>>vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(),
        [](const pair<int,int>&a, const pair<int, int>&b){
            return a.second > b.second;
        });

        vector<int>v;
        for(int i=0;i<k;i++)
        {
            v.push_back(vec[i].first);
        }
        return v;
    }
};
