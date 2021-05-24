class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int>ans(n,0);
        // if(n==1)
        // {
        //     ans.push_back(0);
        // }
        
        for(int i=0;i<n;i++)
        {
            ans[i] = i * 2 - n + 1;
        }
        
        return ans;
        
    }
};