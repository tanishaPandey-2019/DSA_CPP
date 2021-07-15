class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int>ans;
        int n = nums.size();
        int temp =0;
        
        for(int i=0;i<n;i++)
        {
            temp = nums[nums[i]];
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};