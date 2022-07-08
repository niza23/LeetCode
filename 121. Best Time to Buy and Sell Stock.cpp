class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int maxright=prices[n-1];
        int profit=0;
        
        for(int i=n-2; i>=0; i--)
        {
            maxright=max(maxright,prices[i]);
            
            profit=max(profit,maxright-prices[i]);
        }
        
        return profit;
    }
};