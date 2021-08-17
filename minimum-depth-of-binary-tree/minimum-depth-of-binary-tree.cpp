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
    int minDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int leftDepth = minDepth(root->left) + 1;
        int rightDepth = minDepth(root->right) + 1;
        
        int ans = min(leftDepth,rightDepth);
        
        if(ans > 1)
            return ans;
        
        return max(leftDepth,rightDepth);
        
    }
};