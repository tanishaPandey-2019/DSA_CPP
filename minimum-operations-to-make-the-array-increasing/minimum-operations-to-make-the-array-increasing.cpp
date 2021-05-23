class Solution {
public:
    int minOperations(vector<int>& arr) {
        
        int n = arr.size();
        int count = 0;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i] == arr[i-1])
            {
                arr[i]++;
                count++;
            }
            else if(arr[i] < arr[i-1])
            {
                count += (arr[i-1] - arr[i]) + 1;
                arr[i] = arr[i-1] + 1;
                
            }
            else
            {
                continue;
            }
            cout<<count<<" ";
        }
        
        return count;
        
    }
};