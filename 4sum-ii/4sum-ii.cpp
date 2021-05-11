class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int> sumNums;
        int n = nums1.size();
        int sum1 = 0, sum2 = 0;
        
        for(int i = 0; i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                sum1 = nums1[i] + nums2[j];
                sumNums[sum1]++;
            }
        }
        
        int count = 0;
        
        for(int k = 0;k<n;k++)
        {
            for(int m=0;m<n;m++)
            {
                sum2 = nums3[k] + nums4[m];
                auto itr = sumNums.find(0 - sum2);
                if(itr != sumNums.end())
                {
                    count+= itr->second;
                }
            }
        }
        
        return count;
    }
};