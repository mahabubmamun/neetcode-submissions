class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int>pref(size);
        vector<int>suf(size);
        vector<int>res(size);

        pref[0] = 1;
        suf[size-1] = 1;

        for(int i=1;i<size;i++)
        {
            pref[i] = nums[i-1] * pref[i-1];
        }
        for(int i=size-2;i>=0;i--)
        {
            suf[i] = nums[i+1] * suf[i+1];
        }

        for(int i=0;i<size;i++)
        {
            res[i] = suf[i] * pref[i];
        }
        return res;
    }
};
