class Solution {
public:
    int trailingZeroes(int n) {
        
        int ans = 0;
        int fact = 5;
        int temp = 1;
        
        while( temp != 0)
        {
            temp = n/fact;
            ans += temp;
            fact *= 5;;
        }
        
        return ans;
        
    }
};