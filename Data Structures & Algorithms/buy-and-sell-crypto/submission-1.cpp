class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0,j=0;
        int sum = 0;
        int size = prices.size();
        while(i!=size, j!=size)
        {
            if(prices[i] >= prices[i+1])
            {
                i++;
                j=i;
            }
            else if(prices[i+1] >= prices[i])
            {
                j++;
                int temp_sum = prices[j] - prices[i];
                sum = max(sum, temp_sum);
            } 
        }
        return sum;
    }
};
