class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n == 1 || n == 3)
        {
            return true;
        }
        
        else if(n == 0 || n == 2 || n % 3 != 0)
        {
            return false;
        }
        
        return isPowerOfThree(n/3);
        
        
    }
};