class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        int newSize = 2*n;
        
        vector<int> ans;
        int temp = 0;
        
        for(int i=0;i<n;i++)
        {
            temp = nums[i];
            ans.push_back(temp);
        }
        
        for(int i=0;i<n;i++)
        {
            temp = nums[i];
            ans.push_back(temp);
        }
        
        
        return ans;
        
        
    }
};