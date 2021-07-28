class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n == 1 || n == 4)
        {
            return true;
        }
        
        else if(n == 0 || n % 4 != 0)
        {
            return false;
        }
        
        return isPowerOfFour(n/4);
        
    }
};