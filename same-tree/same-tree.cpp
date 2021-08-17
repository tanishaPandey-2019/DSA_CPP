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
//     void inorder(TreeNode* root, vector<int> &ele)
//     {
//         if(root == NULL)
//             return;
        
//         inorder(root->left, ele);
//         ele.push_back(root->val);
//         inorder(root->right,ele);
        
//     }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == NULL && q == NULL)
            return true;
        
        if(p == NULL || q == NULL)
            return false;
        
        if(p->val != q->val)
            return false;
        
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
//         vector<int> pInorder;
//         vector<int> qInorder;
        
//         inorder(p, pInorder);
//         inorder(q, qInorder);
        
//         if(pInorder == qInorder)
//             return true;
//         else
//             return false;
        
    }
};