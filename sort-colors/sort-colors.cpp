class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        
        int r = 0 , w = 0, b = 0;
        
        for(int i = 0; i < n;i++)
        {
            if(nums[i] == 0)
            {
                r++;
            }
            else if(nums[i] == 1)
            {
                w++;
            }
            else
            {
                b++;
            }
            
        }
        
        int sr = 0 , er = r - 1;
        int sw = r , ew = r + w - 1;
        int sb = r + w , eb = b + r + w - 1;
        
        for(int i = sr; i <= er; i++)
        {
            nums[i] = 0;
        }
        
        for(int i = sw; i <= ew; i++)
        {
            nums[i] = 1;
        }
        
        for(int i = sb; i <= eb; i++)
        {
            nums[i] = 2;
        }
        
    }
};