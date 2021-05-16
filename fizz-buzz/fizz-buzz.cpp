class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> ans;
        int count  = 0;
        string value;
        
        for(int i=1;i<n+1;i++)
        {
        
        if(i % 3 == 0 && i % 5 != 0)
        {
            ans.push_back("Fizz");
            count++;
        }
        
        else if(i % 3 != 0 && i % 5 == 0)
        {
            ans.push_back("Buzz");
            count++;
        }
        
        else if(i % 3 == 0 && i % 5 == 0)
        {
            ans.push_back("FizzBuzz");
            count++;
        }
        
        else
        {
            count++;
            value = to_string(count);
            ans.push_back(value);
            
        }
        }
        
         return ans;   
        
    }
};