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
    vector<int> solution;
    
    void helper(TreeNode* root, int &sum)
    {
        if(root->left == NULL && root->right == NULL)
        {
            solution.push_back(sum);
            return;
        }
        
        else
        {
            int saveSum = sum;
            
            if(root->left)
            {
                sum += root->left->val;
                helper(root->left, sum);
            }
            
            if(root->right)
            {
                sum = saveSum;
                sum += root->right->val;
                helper(root->right,sum);
            }
        }
        return;
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)
            return false;
        int sum = root->val;
        helper(root,sum);
        
        int n = solution.size();
                
        for(int i = 0; i < n; i++)
        {
            if(solution[i] == targetSum)
                return true;
        }
        return false;
        
    }
};