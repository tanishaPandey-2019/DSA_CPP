/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void dfs(Node* root, vector<int> &values)
    {
        if(root == NULL)
            return;
        
        values.push_back(root->val);
        
        for(int i=0;i<root->children.size();i++)
        {
            dfs(root->children[i],values);
        }
    }
    
    vector<int> preorder(Node* root) {
        
        vector<int> ans;
        dfs(root, ans);
        return ans;
            
        
    }
};