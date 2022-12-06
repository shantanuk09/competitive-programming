// LeetCode 130. Surrounded Regions
// DFS.
class Solution{
public:
    void DFS(vector<vector<char>> &board, vector<vector<bool>> &visited, int m, int n, int i, int j){
        if(board[i][j] == 'X') return;
        if(visited[i][j]) return;
        visited[i][j] = true;
        board[i][j] = 'N';
        if(i + 1 < m && board[i + 1][j] == 'O') DFS(board, visited, m, n, i + 1, j);
        if(i - 1 >= 0 && board[i - 1][j] == 'O') DFS(board, visited, m, n, i - 1, j);
        if(j + 1 < n && board[i][j + 1] == 'O') DFS(board, visited, m, n, i, j + 1);
        if(j - 1 >= 0 && board[i][j - 1] == 'O') DFS(board, visited, m, n, i, j - 1);
    }

    void solve(vector<vector<char>>& board){
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for(int i = 0; i < m; i++)
            DFS(board, visited, m, n, i, 0), DFS(board, visited, m, n, i, n - 1);
        for(int i = 0; i < n; i++)
            DFS(board, visited, m, n, 0, i), DFS(board, visited, m, n, m - 1, i);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == 'N') board[i][j] = 'O';
            }
        }
    }
};

