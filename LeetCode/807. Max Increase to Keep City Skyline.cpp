// LeetCode 807. Max Increase to Keep City Skyline
class Solution{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid){
       int n = grid.size(), sum = 0;
        vector<int> row(n, 0), column(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                row[i] = max(row[i], grid[i][j]);
                column[j] = max(column[j], grid[i][j]);
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                sum += min(row[i], column[j]) - grid[i][j];
        return sum;
    }
};