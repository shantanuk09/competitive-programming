// LeetCode 36. Valid Sudoku
class Solution{
public:
    bool rowColumnCheck(vector<vector<char>>& board, int r, int c){
        for(int i = 0; i < board.size(); i++)
            if(i != r && board[i][c] == board[r][c]) return false;
        for(int i = 0; i < board[0].size(); i++)
            if(i != c && board[r][i] == board[r][c]) return false;
        return true;
    }
    
    bool subBoxCheck(vector<vector<char>>& board, int r, int c){
        int element = 0;
        set<char> st;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                if(board[r + i][c + j] != '.') element++, st.insert(board[r + i][c + j]);
        return element == st.size();
    }
    
    bool isValidSudoku(vector<vector<char>>& board){
        int m = board.size(), n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] != '.' && !rowColumnCheck(board, i, j)) return false;
                if(i % 3 == 0 && j % 3 == 0 && !subBoxCheck(board, i, j)) return false;
            }
        }
        return true;
    }
};