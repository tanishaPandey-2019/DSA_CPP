class Solution {
public:
    
    static bool sortCol(const vector<int> &v1, const vector<int> &v2)
    {
        return v1[1] > v2[1];
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int,int> numsFreq;
        unordered_map<int,int> :: iterator itr;
        
        vector<vector<int>> record;
        
        
        for(int i=0;i<nums.size();i++)
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
        
        for(auto itr = numsFreq.begin(); itr != numsFreq.end();itr++)
        {
            record.push_back({itr->first,itr->second});
        }
        
        sort(record.begin(), record.end(), sortCol);
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(record[i][0]);
        }
        
        return ans;
        
    }
};