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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
        {
            return {};
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<vector<int>> ans;
        vector<int> vec;
        int count  = 1;
        while(!q.empty())
        {
            TreeNode* node = q.front();
            
               if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                vec.push_back(node->val);
                q.pop();
            
            if(--count == 0)
            {
                ans.push_back(vec);
                vec.clear();
                count = q.size();
            }
        }
        
        return ans;
    }
};