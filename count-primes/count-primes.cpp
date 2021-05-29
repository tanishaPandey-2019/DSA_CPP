class Solution {
public:
    int countPrimes(int n) {
        
        if(n <= 2)
            return 0;
        
        vector<int> primes(n,1);
        int count = 0;
        primes.push_back(0);
        primes.push_back(0);
        
        for(int i = 2;i<n;i++)
        {
            if(primes[i] == 1)
            {
                for(int j = 2;i*j<n;j++)
                {
                    primes[i*j] = 0;
                }
                    
            }
        }
        
        for(int i=2;i<n;i++)
        {
            if(primes[i] == 1)
                count++;
        }
        
        return count;
        
    }
};