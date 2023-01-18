// LeetCode 2428. Maximum Sum of an Hourglass
class Solution{
public:
    int maxSum(vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        int maxSum = 0;
        for(int i = 1; i < m - 1; i++){
            for(int j = 1; j < n - 1; j++){
                int currentSum = grid[i - 1][j - 1] + grid[i - 1][j] + grid[i - 1][j + 1] + grid[i][j] + grid[i + 1][j - 1] + grid[i + 1][j] + grid[i + 1][j + 1];
                maxSum = max(maxSum, currentSum);
            }
        }
        return maxSum;
    }
};