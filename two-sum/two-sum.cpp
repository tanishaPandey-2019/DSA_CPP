class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        multimap<int,int> numsIndex;
        vector<int>ans;
        // multimap<int,int> :: iterator itr;
        
        for(int i=0;i<n;i++)
        {
            numsIndex.insert(pair<int,int>(nums[i],i));
        }
        
        for(int i=0;i<n;i++)
        {
            int value = nums[i];
            
            for(auto itr = numsIndex.begin();itr != numsIndex.end();itr++)
            {
                if(itr->first == target - nums[i] && itr->second != i)
                {
                    ans.push_back(i);
                    ans.push_back(itr->second);
                    return ans;
                }
            }
            
        }
        return ans;
        
    }
};