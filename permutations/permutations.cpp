class Solution {
public:
    void helper(vector<int> &temp, int i, int n, vector<vector<int>> &ans)
    {
        
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        
        
            for(int j = i; j <= n; j++)
            {
                swap(temp[i],temp[j]);
                helper(temp, i + 1,n,ans);
                
                swap(temp[i],temp[j]);
            }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        vector<vector<int>> ans;
        int n = nums.size();
        
        helper(nums,0,n - 1,ans);
        
        return ans;
        
        
    }
};