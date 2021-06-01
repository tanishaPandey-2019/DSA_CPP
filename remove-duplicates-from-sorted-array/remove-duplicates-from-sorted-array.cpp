class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int>numsFreq;
        map<int,int> :: iterator itr;
        
        for(int i =0;i<nums.size();i++)
        {
            if(numsFreq.find(nums[i]) != numsFreq.end())
            {
                itr = numsFreq.find(nums[i]);
                itr->second++;
            }
            else
            {
                numsFreq[nums[i]] = 1;
            }
        }
        
        nums.clear();
        int n = numsFreq.size();
        for(itr = numsFreq.begin();itr!=numsFreq.end();itr++)
        {
            nums.push_back(itr->first);
        }
        
        return nums.size();
    }
};