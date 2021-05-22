class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        
        int n = nums.size();
        vector<int> ans(0,n);
        int ind,val;
        
        for(int i=0;i<n;i++)
        {
            ind = index[i];
            val = nums[i];
            
            ans.insert(ans.begin() + ind ,val);
        }
        
        return ans;
        
    }
};