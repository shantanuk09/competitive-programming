// LeetCode 286. Walls and Gates
// BFS.
class Solution{
public:
    const int EMPTY = INT_MAX;
    const int GATE = 0;
    const vector<vector<int>> DIRECTIONS = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    void wallsAndGates(vector<vector<int>>& rooms){
        int m = rooms.size(), n = rooms[0].size();
        if(m == 0) return;
        queue<vector<int>> qe;
        for(int row = 0; row < m; row++)
            for(int col = 0; col < n; col++)
                if(rooms[row][col] == GATE) qe.push({row, col});
        
        while(!qe.empty()){
            vector<int> point = qe.front();
            qe.pop();
            int row = point[0];
            int col = point[1];
            for(auto direction : DIRECTIONS){
                int r = row + direction[0];
                int c = col + direction[1];
                if(r < 0 || r >= m || c < 0 || c >= n || rooms[r][c] != EMPTY) continue;
                rooms[r][c] = rooms[row][col] + 1;
                qe.push({r, c});
            }
        }

    }
};

