// LeetCode 417. Pacific Atlantic Water Flow
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<bool>> pacific (m, vector<bool>(n, false));
        vector<vector<bool>> atlantic (m, vector<bool>(n, false));
        vector<vector<int>> vr;
        for(int i = 0; i < m; i++) DFS(heights, pacific, m, n, i, 0), DFS(heights, atlantic, m, n, i, n - 1);
        for(int i = 0; i < n; i++) DFS(heights, pacific, m, n, 0, i), DFS(heights, atlantic, m, n, m - 1, i);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(pacific[i][j] && atlantic[i][j]) vr.push_back({i, j});
        return vr;
    }
    void DFS(vector<vector<int>> &heights, vector<vector<bool>> &visited, int m, int n, int i, int j){
        if(visited[i][j]) return;
        if(!visited[i][j]) visited[i][j] = true;
        if(i + 1 < m && heights[i][j] <= heights[i + 1][j]) DFS(heights, visited, m, n, i + 1, j);
        if(i - 1 >= 0 && heights[i][j] <= heights[i - 1][j]) DFS(heights, visited, m, n, i - 1, j);
        if(j + 1 < n && heights[i][j] <= heights[i][j + 1]) DFS(heights, visited, m, n, i, j + 1);
        if(j - 1 >= 0 && heights[i][j] <= heights[i][j - 1]) DFS(heights, visited, m, n, i, j - 1);
    }
};