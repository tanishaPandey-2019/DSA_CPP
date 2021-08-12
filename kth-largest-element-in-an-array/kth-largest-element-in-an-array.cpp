class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n - k];
        
//         set<int> s1;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             s1.insert(nums[i]);
//         }
        
//         vector<int> ans;
//         for(auto itr = s1.begin(); itr != s1.end(); itr++)
//         {
//             cout<<*itr <<" ";
//             ans.push_back(*itr);
//         }
        
//         int n = ans.size();
//         sort(ans.begin(),ans.end());
        
//         return ans[n - k];
        
    }
};