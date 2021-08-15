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
    TreeNode* current;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        inorder(root->left);
        root->left = NULL;
        current->right = root;
        current = root;
        inorder(root->right);        
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        TreeNode* ans = new TreeNode(0);
        current = ans;
        inorder(root);
        
        return ans->right;
        
    }
};