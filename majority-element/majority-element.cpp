class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
          unordered_map<int,int> numFreq;
        unordered_map<int,int> :: iterator itr;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(numFreq.find(nums[i]) != numFreq.end())
            {
                itr = numFreq.find(nums[i]);
                itr->second++;
            }
            else
            {
                numFreq[nums[i]] = 1;
            }
            
        }
        
        for(auto itr = numFreq.begin();itr!= numFreq.end();itr++)
        {
            if(itr->second > n/2)
            {
                return itr->first;
            }
        }
        
        return -1;
        
    }
};