class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
         if(nums.size() == 0) return "";
        string res = "";
        sort(nums.begin(), nums.end(), myComp);
       
        for(int i : nums)
            res += to_string(i);
        while(res[0] == '0') res.erase(res.begin());
        if(res == "") return "0";
        return res;
        
    }
    
    static bool myComp(int a, int b)
    {
        string ab = to_string(a) + to_string(b);
        string ba = to_string(b) + to_string(a);
        return (ab > ba);
    }
};