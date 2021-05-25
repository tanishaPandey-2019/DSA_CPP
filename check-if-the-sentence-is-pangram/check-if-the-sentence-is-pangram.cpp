class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char,int> alphaFreq;
        unordered_map<char,int> :: iterator itr;
        int n = sentence.size();
        
        for(int i=97;i<123;i++)
        {
            alphaFreq[i]++;
        }
        
        for(int i=0;i<n;i++)
        {
            // if(alphaFreq.find(sentence[i]) !)
            // {
                itr = alphaFreq.find(sentence[i]);
                itr->second++;
            // }
        }
        
        for(auto itr = alphaFreq.begin(); itr != alphaFreq.end();itr++)
        {
            if(itr->second == 1)
            {
                return false;
            }
            
        }
        
        return true;
    }
};