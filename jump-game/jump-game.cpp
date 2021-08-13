class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 1)
            return true;
        
        int m = nums[0];
        int b = m;
        
        for(int i=0;i<n;i++)
        {
            if( i > b)
            {
                b = m;
            }
            
            m = max(m , nums[i] + i);
            if( m == nums[i] + i && nums[i] == 0 && i != n - 1)
                return false;
        }
        
        return true;
        
    }
};