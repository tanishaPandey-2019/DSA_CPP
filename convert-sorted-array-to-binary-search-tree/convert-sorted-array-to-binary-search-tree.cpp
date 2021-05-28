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
    TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end){
        if(end<=start) return NULL; 
        int midIdx=(end+start)/2;
        TreeNode* root=new TreeNode(nums[midIdx]);
        root->left=sortedArrayToBST(nums, start, midIdx);
        root->right=sortedArrayToBST(nums, midIdx+1,end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0,nums.size());
    }
};
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
        
//         if(nums.size() == 0)
//             return NULL;
//         if(nums.size() == 1)
//             return new TreeNode(nums[0]);
        
//         int mid = nums.size()/2;
//         TreeNode* root = new TreeNode(nums[mid]);
        
//         vector<int> leftInt(nums.begin(), nums.begin() + mid);
//         vector<int> rightInt(nums.begin() + mid + 1,nums.end());
        
//         root->left = sortedArrayToBST(leftInt);
//         root->right = sortedArrayToBST(rightInt);
        
//         return root;
        
    