class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int l=0, r=size-1;
        int sum = 0;
        while(l<r)
        {
            int temp = max(height[l], height[r]);
            for(int i=l+1;i<r;i++)
            {
                if(height[i] < temp)
                {
                    int temp2 = temp - height[i];
                    sum += temp2;
                    height[i] = height[i] + temp2;
                }
            }
            if(height[r-1] <= height[l+1])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return sum;
    }
};
