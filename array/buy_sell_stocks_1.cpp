//link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//pseudocode
int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0)
        {
            return 0;
        }
        
        
        
        int profit = 0;
        int min_ele = prices[0];
        for(int i = 1;i<prices.size();i++)
        {
            min_ele = min(min_ele,prices[i]);
            profit = max(profit,prices[i]-min_ele);
        }
        return profit;
    }