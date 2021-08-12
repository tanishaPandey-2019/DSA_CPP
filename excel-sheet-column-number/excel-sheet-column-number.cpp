class Solution {
public:
    
    int titleToNumber(string columnTitle) {
        
        long int n = columnTitle.size();
        long int sum = 0;
        long int pow = 1;
        
        for(int i = n-1;i>=0;i--)
        {
            char ch = columnTitle[i];
            sum = sum + int( ch - 64)*pow;
            pow = pow * 26;
        }
        
        return sum;
        
        
    }
};