class Solution {
public:
    
    
    bool checkIsSafe(vector<vector<string>> &ans, vector<string> &board, int col, int row, int n) {
          // check upper diagonal
        int duprow = row;
        int dupcol = col; 
        
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        
        col = dupcol; 
        row = duprow;
        while(col>=0) {
            if(board[row][col] == 'Q') return false;
            col--; 
        }
    
        row = duprow;
        col = dupcol; 
        while(row<n && col>=0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--; 
        }
        
        return true; 
    } 
    
    
    
    
    void solve(vector<vector<string>> &ans, vector<string> &board, int col, int n){
        if(col == n) {
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n ;row++) {
            if(checkIsSafe(ans, board, col, row, n)) {
                board[row][col] = 'Q';
                solve(ans,board, col + 1, n);
                board[row][col] = '.';
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        
        solve(ans, board, 0, n);
        return ans;
    }
};