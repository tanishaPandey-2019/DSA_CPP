class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        set<int> freqNum;
        set<int> :: iterator itr;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            if(freqNum.find(nums[i]) != freqNum.end())
            {
                return nums[i];
                
            }
            else
            {
                freqNum.insert(nums[i]);
            }
        }
        
        return 0;
        
    }
};