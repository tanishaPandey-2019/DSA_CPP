class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.size();
        unordered_map<char,int> charS;
        unordered_map<char,int> :: iterator itr;
        
        for(int i=0;i<n;i++)
        {
            if(charS.find(s[i]) != charS.end())
            {
                itr = charS.find(s[i]);
                itr->second = -1;
            }
            else
            {
                 charS[s[i]] = i;
            }
        }
        cout<<endl;
        int index = INT_MAX;
        for(auto itr = charS.begin();itr != charS.end();itr++)
        {
           if(itr->second < index && itr->second != -1)
           {
               index = itr->second;
           }
        }
    
        if(index >= 0 && index < n)
            return index;
        
        else
            return -1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int len = s.length();
//         map<char,int> charFreq;
//         map<char,int> charIndex;
//         map<char,int> :: iterator itr;
        
//         for(int i=0;i<len;i++)
//         {
//             if(charFreq.find(s[i]) != charFreq.end())
//             {
//                 itr = charFreq.find(s[i]);
//                 itr->second++;
//             }
//             else
//             {
//                 charFreq.insert(pair<char,int>(s[i],1));
//             }
            
            
//         }
        
//         for(int i=0;i<len;i++)
//         {
//             if(charIndex.find(s[i]) != charIndex.end())
//             {
//                 itr = charIndex.find(s[i]);
//                 itr->second = i;
//             }
//             else
//             {
//                 charIndex.insert(pair<char,int>(s[i],i));
//             }
            
//         }
        
//         char temp;
//         int index = -1;
//         for(auto itr = charFreq.begin(),itr2 = charIndex.begin();itr != charFreq.end(), itr2 != charIndex.end();itr++,itr2++)
//         {
//             if(itr->second == 1)
//             {
//                 temp = itr->first;
//                 index = itr2->second;
//             }
//             else
//             {
//                 return index;
//             }
            
            
//         }
        
//         return index;
        
    }
};