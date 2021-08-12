class Solution {
public:
    void helper(vector<string> &ans, string str, int n, int o, int c)
    {
        if(o + c == 2 * n)
        {
            ans.push_back(str);
            return;
        }
        
        if( o == c || o < n)
        {
            helper(ans,str + '(', n , o + 1, c);
        }
        
        if( c < o)
        {
            helper(ans,str + ')',n, o , c + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        helper(ans,"",n,0,0);
        return ans;
        
    }
};