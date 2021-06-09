// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int n){
       int m,sum=0;
	   while(n>0)
    	{
	       m=n%10;
	       sum=sum+m;
	       n=n/10;
	       
	    
     	}
     	
     	return sum;
        //code here
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
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends