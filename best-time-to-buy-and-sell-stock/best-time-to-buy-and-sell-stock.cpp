class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int minPrice = INT_MAX;
        int maxProfit = 0;
        int n = prices.size();
        
        for(int i=0;i<n;i++)
        {
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
        
//         int maxProfit = 0;
//         int n = prices.size();
        
//         for(int i = 0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {                
//                 int profit = prices[j] - prices[i];
//                 if(profit > maxProfit)
//                 {
//                     maxProfit = profit;
//                 }
//             }
            
            
        
//         }
//         return maxProfit;
        
    }
};