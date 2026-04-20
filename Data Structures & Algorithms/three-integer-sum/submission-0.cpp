class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int size = nums.size();
        for(int i=0;i<size-2;i++)
        {
            int j=i+1,k=size-1;
            while(j<k)
            {
                // int sum = nums[i]+nums[j]+nums[k];
                // if(sum<0)
                // {
                //     j++;
                // }
                // else if(sum>0)
                // {
                //     k--;
                // }
                // else
                // {
                //     res.push_back({nums[i],nums[j],nums[k]});
                //     j++;
                //     k--;
                // }


                if((nums[i]+nums[j]+nums[k])<0)
                {
                    j++;
                }
                else if((nums[i]+nums[j]+nums[k])>0)
                {
                    k--;
                }
                else
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};
