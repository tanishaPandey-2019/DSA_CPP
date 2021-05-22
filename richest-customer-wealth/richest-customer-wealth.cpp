class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxWealth = INT_MIN;
        int wealth = 0;
        int numCustomers = accounts.size();
        int numBanks = accounts[0].size();
        
        for(int i=0;i<numCustomers;i++)
        {
            wealth = 0;
            for(int j=0;j<numBanks;j++)
            {
               wealth += accounts[i][j]; 
            }
            if(wealth > maxWealth)
            {
                maxWealth = wealth;
            }
        }
        
        return maxWealth;
        
    }
};