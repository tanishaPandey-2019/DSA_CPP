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
    vector<string> soln;
    
    void helper(TreeNode* root,string &result)
    {
        
        if( root->left == NULL && root->right == NULL)
        {
            soln.push_back(result);
            return;
        }
        else
        {
            string saveResult = result;
            
            if(root->left)
            {
                result += "->" + to_string(root->left->val);
                helper(root->left,result);
            }
            
            if(root->right)
            {
                result = saveResult;
                result += "->" + to_string(root->right->val);
                helper(root->right,result);
                
            }
        }
        
        return;
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string ans = to_string(root->val);
        helper(root,ans);
        return soln;     
        
        
    }
};