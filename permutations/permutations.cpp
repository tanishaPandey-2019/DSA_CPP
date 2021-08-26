class Solution {
public:
    void helper(vector<int> &temp, vector<vector<int>> &ans, int i, int n)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int j = i; j <= n; j++)
        {
            swap(temp[i],temp[j]);
            helper(temp,ans,i + 1,n);
            
            swap(temp[i],temp[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        vector<vector<int>> ans;
        int n = nums.size();
        helper(nums,ans,0,n - 1);
        return ans;
        
        
        
    }
};