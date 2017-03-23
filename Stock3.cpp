//Say you have an array for which the ith element is the price of a given stock on day i.

//Design an algorithm to find the maximum profit. You may complete at most two transactions.
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        
        if(prices.size()<=1)
            return 0;
        else
        {
            int K = 2;
            int maxPro = 0;
            vector<vector<int>> f(K+1,vector<int>(prices.size(),0));
            for(int t = 1; t <= K; t++)
            {
                int tempmax = f[t-1][0]-prices[0];
                for(int i=1; i<prices.size();i++)
                {
                    f[t][i] = max(f[t][i-1],prices[i]+tempmax);
                    tempmax = max(tempmax,f[t-1][i]-prices[i]);
                    maxPro = max(f[t][i],maxPro);
                }
            }
            return maxPro;
        }
        
    }
};