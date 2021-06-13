class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int> numFreq;
                
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i=0;i<n1;i++)
        {
            numFreq[nums1[i]]++;
          
        }
        
      
        vector<int>ans;
        for(int i=0;i<n2;i++)
        {
            if(--numFreq[nums2[i]] >= 0)
            {
                ans.push_back(nums2[i]);
            }
          
        }
        
        return ans;
        
    }
};