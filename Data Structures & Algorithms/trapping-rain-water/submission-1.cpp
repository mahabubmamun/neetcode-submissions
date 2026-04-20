class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int l=0, r=size-1;
        int leftMax=height[l], rightMax = height[r];
        int sum = 0;
        while(l<r)
        {
            if(leftMax < rightMax)
            {
                l++;
                leftMax = max(leftMax, height[l]);
                sum += leftMax - height[l];
            }
            else
            {
                r--;
                rightMax = max(rightMax,height[r]);
                sum += rightMax - height[r];
            }
        }
        return sum;
    }
};
