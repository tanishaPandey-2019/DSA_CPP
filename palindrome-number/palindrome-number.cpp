class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
ss <<x;
string s;
ss >>s;
int l=0;
int r=s.size()-1;
while(l<=r){
if(s[l]!=s[r]){
return false;
}
l++;
r--;
}
return true;

        
    }
};