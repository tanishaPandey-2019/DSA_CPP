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
    
    TreeNode* generateTree(vector<int>& preorder, vector<int>& inorder, int s, int e, int &rootIndex)
    {
        
        if( (s > e) || (rootIndex == inorder.size()))
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[rootIndex]);
        int index = s;
        
        for(int j = s ; j <= e;j++)
        {
            if(inorder[j] == preorder[rootIndex])
            {
                index = j;
                break;
            }
        }
        
        rootIndex++;
        
        root->left = generateTree(preorder, inorder,s, index - 1, rootIndex);
        root->right = generateTree(preorder, inorder, index + 1, e, rootIndex);
        
        return root;
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int s = 0;
        int e = inorder.size() - 1;
        int rootIndex = 0;
        
        if(e == -1)
            return NULL;        
        
        TreeNode* temp = generateTree(preorder, inorder, s, e, rootIndex);
        
        return temp;
        
    }
};