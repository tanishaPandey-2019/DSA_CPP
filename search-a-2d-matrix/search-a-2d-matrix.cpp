class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int index = 0;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            if(matrix[i][0] <= target)
            {
                index = i;
            }
        }
        
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[index][j] == target)
            {
                return true;
            }
        }
        
        return false;
    }
};