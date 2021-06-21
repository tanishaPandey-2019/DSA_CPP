class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
         int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    
        vector<vector<int>> m = board;
        int mi = board.size();
        int n = board[0].size();
        for(int i = 0;i < mi;i++){
            for(int j = 0;j < n;j++){
                int live = 0;
                int dead = 0;
                for(int k = 0;k < 8;k++){
                    if(i+dx[k] >= 0 and i+dx[k] < mi and j+dy[k] >= 0 and j+dy[k] < n){
                        if(m[i+dx[k]][j+dy[k]])
                            live++;
                        else
                            dead++;
                    }
                }
                if(m[i][j] == 0){
                    if(live == 3)
                        board[i][j] = 1;
                }else{
                    if(live < 2)
                        board[i][j] = 0;
                    else if(live > 3)
                        board[i][j] = 0;
                }
            }
        }
        
    }
};