// LeetCode 79. Word Search
// Standard Backtracking.
class Solution{
public:
    bool backtrack(vector<vector<char>> &board, string word, int index, int row, int col){
        if(index >= word.size()) return true;
        if(row < 0 || row == board.size() || col < 0 || col == board[0].size() || board[row][col] != word[index]) return false;
        bool exists = false;
        board[row][col] = '#';
        exists = backtrack(board, word, index + 1, row + 1, col) || backtrack(board, word, index + 1, row - 1, col) || backtrack(board, word, index + 1, row, col + 1) || backtrack(board, word, index + 1, row, col - 1);
        board[row][col] = word[index];
        return exists;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++)
                if(word[0] == board[i][j] && backtrack(board, word, 0, i, j)) return true;
        return false;
    }
};
