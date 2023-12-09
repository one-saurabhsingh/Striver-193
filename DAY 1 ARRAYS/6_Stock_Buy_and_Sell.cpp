class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = prices[0];  // we take initial minimum price as 1st price.
        int maxProfit = 0;     // we take initial max. profit as 0.
        int n = prices.size(); // size of price array.
        for (int i = 1; i < n; i++)
        {
            int cost = prices[i] - mini;      // To find cost of stock that day.
            maxProfit = max(maxProfit, cost); // find max profit is on that day or any past day.
            mini = min(mini, prices[i]);      // To update minimum price of stock after 1st day.
        }
        return maxProfit; // return its max profit.
    }
};