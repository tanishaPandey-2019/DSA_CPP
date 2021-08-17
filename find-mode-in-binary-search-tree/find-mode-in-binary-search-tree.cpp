/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &ele)
    {
        if(root == NULL)
        {
            return;
        }
        
        inorder(root->left,ele);
        ele.push_back(root->val);
        inorder(root->right,ele);
        
    }
    vector<int> findMode(TreeNode* root) {
        
        vector<int> ans;
        vector<int> inor;
        inorder(root, inor);
        
        unordered_map<int,int> freq;
        unordered_map<int,int> :: iterator itr;
        int n = inor.size();
        
        for(int i = 0;i<n;i++)
        {
            if(freq.find(inor[i]) != freq.end())
            {
                itr = freq.find(inor[i]);
                itr->second++;
            }
            else
            {
                freq[inor[i]] = 1;
            }
            
        }
        
        int maxValue = INT_MIN;
        
        for(auto itr = freq.begin(); itr != freq.end(); itr++)
        {
            if(itr->second >= maxValue)
            {
                maxValue = itr->second;
                // ans.push_back(itr->first);
            }            
        }
        for(auto itr = freq.begin(); itr != freq.end(); itr++)
        {
            if(itr->second >= maxValue)
            {
                // maxValue = itr->second;
                ans.push_back(itr->first);
            }            
        }
        
        return ans;
        
    }
};