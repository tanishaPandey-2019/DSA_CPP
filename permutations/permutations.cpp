class Solution {
public:
    
    void helper(vector<int> a, vector<vector<int>> &ans, int l, int n)
    {
        if(l == n)
        {
            ans.push_back(a);
        }
        
        else
        {
            for(int i = l;i <= n; i++)
            {
                swap(a[i],a[l]);
                
                helper(a,ans, l + 1,n);
                
                swap(a[i],a[l]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size() - 1;
        helper(nums,ans,0,n);
        return ans;
        
    }
};