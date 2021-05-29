class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

        int cs = 0;
        
        int n = nums.size();
        int ms = nums[0];
        
        for(int i=0;i<n;i++)
        {
            cs += nums[i];
            ms = max(cs,ms);
            cs = max(cs,0);
        }
        
        return ms;
        
    }
};