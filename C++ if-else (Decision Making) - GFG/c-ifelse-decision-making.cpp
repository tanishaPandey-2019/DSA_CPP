// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string compareFive(int x){
        
        string ans;
        if(x > 5)
        {
            ans = "Greater than 5";
        }
        else if(x==5)
        {
            ans ="Equal to 5";
        }
        else
        {
            ans = "Less than 5";
        }
        
        return ans;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends