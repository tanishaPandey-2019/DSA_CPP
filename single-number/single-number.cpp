class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        
        
        sort(nums.begin(),nums.end());
        
        int val;
        int n = nums.size();
        
        for(int i = 0; i < n; i = i + 2)
        {
            if(i == n-1)
            {
                return nums[n-1];
                
            }
            if(nums[i] != nums[i+1])
            {
                return nums[i];
            }
            
            
        }
        
        return val;
         
        
    }
};