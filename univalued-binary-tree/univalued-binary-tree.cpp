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
    void preorder(TreeNode* root, bool &ans, int key)
    {
        if(root == NULL)
            return;
                
        if(root->val != key)
            ans = false;
        
        preorder(root->left,ans,key);
        preorder(root->right,ans,key);
                  
    }
    bool isUnivalTree(TreeNode* root) {
        
        bool ans = true;;
        int key = root->val;
        
        preorder(root,ans,key);
        
        return ans;
        
    }
};