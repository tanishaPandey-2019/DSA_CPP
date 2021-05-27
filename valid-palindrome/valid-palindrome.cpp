class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0,j = s.size();i<j;i++,j--)
        {
            while(isalnum(s[i]) == false && i<j)
            {
                i++;
                continue;
            }
            while(isalnum(s[j]) == false && i<j)
            {
                j--;
                continue;
            }
            if(toupper(s[i]) != toupper(s[j]))
                return false;
            
        }
        
        return true;
        
        
    }
};