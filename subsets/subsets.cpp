class Solution {
public:
    
    void generateSubset(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int i,int n)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        
        //include the letter 
        temp.push_back(nums[i]);
        generateSubset(nums,temp,ans,i + 1,n);
        
        temp.pop_back();
        //exclude the letter
        generateSubset(nums,temp,ans,i + 1,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        int i = 0;
        
        generateSubset(nums, temp,ans,i,n);
        
        return ans;
        
        
    }
};