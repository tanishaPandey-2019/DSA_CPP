class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        set<int> dpRow;
        set<int> dpCol;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    dpRow.insert(i);
                    dpCol.insert(j);
                }
            }
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(dpRow.find(i) != dpRow.end() || dpCol.find(j) != dpCol.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};