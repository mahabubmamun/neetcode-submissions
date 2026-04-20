class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();


        // Using two pointer TC O(n) ,SC O(1)
        // int i = 0, j = size - 1;
        // while(i<j)
        // {
        //     if((numbers[i]+numbers[j]) == target)
        //     {
        //         return {i+1,j+1};
        //     }
        //     else if((numbers[i]+numbers[j]) < target)
        //     {
        //         i++;
        //     }
        //     else if((numbers[i]+numbers[j]) > target)
        //     {
        //         j--;
        //     }
        // }
        // return {};


        //Using Hashmap
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            int temp = target - numbers[i];
            if(mp.count(temp))
            {
                return {mp[temp], i+1};
            }
            else
            {
                mp[numbers[i]] = i+1;
            }
        }
        return {};
    }
};
