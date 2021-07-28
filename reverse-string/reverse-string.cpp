class Solution {
public:
    void reverseStr(vector<char>& s, int left, int right)
    {
        if(left >= right)
        {
            return;
        }
        
        swap(s[left],s[right]);
        left++;
        right--;
        
        reverseStr(s, left, right);
        
    }
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        reverseStr(s, 0, n -1);
        
        
    }
};