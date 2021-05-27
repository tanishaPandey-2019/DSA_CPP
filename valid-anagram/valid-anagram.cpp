class Solution {
public:
    bool isAnagram(string s1, string s2) {
        
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 != n2)
        {
            return false;
        }
        
        
        unordered_map<char,int> s1Freq;
        for(int i = 0;i<n1;i++)
        {
            s1Freq[s1[i]]++;
        }
        unordered_map<char,int> s2Freq;
        for(int i=0;i<n2;i++)
        {
            s2Freq[s2[i]]++;
        }
        
        unordered_map<char,int> :: iterator itr2;
        for(auto itr = s1Freq.begin();itr != s1Freq.end(); itr++)
        {
            
            
            itr2 = s2Freq.find(itr->first);
            if(s2Freq.find(itr->first) == s2Freq.end() || itr->second != itr2->second)
            {
                
                return false;
            }
        }
        
        return true;
        
//         unordered_map<char,int> tFreq;
//         int numS = s.size();
//         int numT = t.size();
        
//         if(numS != numT)
//         {
//             return false;
//         }
        
//         for(int i = 0; i < numT; i++)
//         {
//             tFreq[t[i]]++;
//         }
        
//         for(int i=0;i<numS;i++)
//         {
//             if(tFreq.find(s[i]) != tFreq.end())
//             {
//                 tFreq[s[i]]--;
//             }
            
//             else 
//                 return false;
            
//         }
        
        
//         if(tFreq.size() != 0)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
        
        
    }
};