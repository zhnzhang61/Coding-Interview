//Say you have an array for which the ith element is the price of a given stock on day i.

//If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        
        int maxPro = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(minPrice,prices[i]);//The minimum price is the temporary minimum price and current price
            maxPro = max(maxPro,prices[i]- minPrice);//The maximum profit is the temporary maximum profit and the current profit
        }
        return maxPro;
    }
};