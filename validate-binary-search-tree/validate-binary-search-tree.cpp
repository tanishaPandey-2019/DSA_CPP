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
    
    bool helper(TreeNode* root, long long minVal, long long maxVal)
    {
        if(root == NULL)
        {
            return true;
        }
        
        if(root->val > minVal && root->val < maxVal)
        {
            bool left = helper(root->left, minVal, root->val);
            bool right = helper(root->right, root->val, maxVal);
            return left && right;
        }
        
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        
        
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        
        return ans;
        
    }
};