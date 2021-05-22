class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int freq, val;
        
        vector<int> ans;
        
        while(i<n)
        {
            freq = nums[i];
            val = nums[i+1];
            
            for(int j = 0;j<freq;j++)
            {
                ans.push_back(val);
            }
            
            i = i+2;
            
        }
        
        return ans;
        
    }
};