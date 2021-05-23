class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int len = s.size();
        int n = indices.size();
        
        string str(n, '*');
        
        for(int i = 0;i<n;i++)
        {
            int index = indices[i];
            str[index] = s[i];
        }
        
        return str;
        
    }
};