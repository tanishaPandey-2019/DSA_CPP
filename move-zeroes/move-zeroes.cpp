class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    
        int n = nums.size();
       
        
        for(int lastZeroidx = 0,curr = 0; curr<n;curr++)
        {
            if(nums[curr] != 0)
            {
                swap(nums[lastZeroidx++],nums[curr]);
            }
        }
        
        
            
            
            
            
            
        
        
        
        
        
        
        
        
//         int n = nums.size();
//         int i = 0,j = 0;
//         int count = 0;
        
       
//         while(j<n)
//         {
//             if(nums[i] == 0)
//             {
//                 j++;
//                 if(nums[j] != 0)
//                 {
//                     swap(nums[i],nums[j]);
//                     count++;
                    
//                 }
//                 else
//                 {
//                     continue;
//                 }
//                 ++i;
//             }
//             else
//             {
//                 i++;
//                 j++;
//             }
//         }
        
//         for(int i = count;i<n;i++)
//         {
//             nums[i] = 0;
//         }
        
    }
};