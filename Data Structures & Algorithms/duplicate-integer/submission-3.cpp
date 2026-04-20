class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        // unordered_map<int,int>um;
        // for(int i=0;i<size;i++)
        // {
        //     um[nums[i]]++;
        // }

        // vector<pair<int,int>>vec(um.begin(), um.end());
        // sort(vec.begin(),vec.end(), 
        // [](const pair<int,int>&a , const pair<int,int>&b){
        //     return a.second > b.second;
        // });

        // if(vec[0].second > 1)
        // {
        //     return true;
        // }
        // return false;


        // approach 1 using sorting, complexity O(nlogn)
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<size-1;i++)
        // {
        //     if(nums[i] == nums[i+1])
        //     {
        //         return true;
        //     }
        // }
        // return false;

        // approach 2 using unordered set, complexity O(n)
        unordered_set<int>us;
        for(int n : nums)
        {
            if(us.count(n))
            {
                return true;
            }
            us.insert(n);
        }
        return false;
    }
};