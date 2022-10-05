//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Name : Manvi Goyal
Date : 05/10/2022

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); i++) 
        {
            if (prices[i] > minPrice)
                maxProfit = max(maxProfit, prices[i] - minPrice);
            else 
                minPrice = min(minPrice, prices[i]);
        }
        
        return maxProfit;
    }   
};