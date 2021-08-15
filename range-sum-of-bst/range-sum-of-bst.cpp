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
//     TreeNode* findNode(TreeNode* root, int value)
//     {
//         if(root == NULL)
//             return NULL;
        
//         if(root->val == value)
//         {
//             return root;
//         }
        
//         TreeNode* leftNode = findNode(root->left,value);
//         TreeNode* rightNode = findNode(root->right,value);
        
//         return leftNode || rightNode;
//     }
    
//     int sumTillRoot(TreeNode* root, TreeNode* node)
//     {
        
//     }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(root == NULL)
            return 0;
        
        if(root->val == low && root->val == high)
            return root->val;
        
        if(root->val >= low && root->val <= high)
        {
            return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
        
        if(root->val < low)
        {
            return rangeSumBST(root->right,low,high);
        }
        
        return rangeSumBST(root->left,low,high);
        
        
        
    }
};