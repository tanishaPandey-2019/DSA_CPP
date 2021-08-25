class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) 
    {
        
        vector<string> ans,string1;
        stringstream ss(text);
        string words;
        
        while(ss>>words)
        {
           string1.push_back(words); 
        }
    
            for(int i = 0; i < string1.size() - 2; i++)
            {
                if(string1[i] == first && string1[i + 1] == second && i + 2 <= string1.size())
                {
                    ans.push_back(string1[i + 2]);
                }
            }
        
        return ans;
        
        
    }
};