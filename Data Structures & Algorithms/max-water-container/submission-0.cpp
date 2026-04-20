class Solution {
public:
    // int max(int a, int b)
    // {
    //     if(a>=b)
    //     {
    //         return a;
    //     }
    //     else
    //     {
    //         return b;
    //     }
    // }
    int maxArea(vector<int>& heights) {
        int mx = 0;
        int size = heights.size();
        int i=0,j=size-1;
        while(i<j)
        {
            int temp = (j-i)*min(heights[i],heights[j]);
            mx = max(temp,mx);
            if(heights[i] <= heights[j])
            {
                i++;
            }
            else if(heights[i] >= heights[j])
            {
                j--;
            }
        }
        return mx;
    }
};
