class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        int r = indices.size();
        // int c = indices[0].size();
        
        for(int i=0;i<r;i++)
        {
            int row = indices[i][0];
            int col = indices[i][1];
            
            for(int c = 0;c<n;c++)
            {
                ans[row][c]++;
            }
            
            for(int ro = 0;ro<m;ro++)
            {
                ans[ro][col]++;
            }
                
        }
        
        int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ans[i][j]<<" ";
                if(ans[i][j] % 2 != 0)
                {
                    count++;
                }
            }
        }
        
        return count;
        
    }
};