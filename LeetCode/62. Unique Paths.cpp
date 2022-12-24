// LeetCode 62. Unique Paths
// Implementation.
class Solution{
public:
    int uniquePaths(int m, int n){
        int memo[m + 1][n + 1];
        memset(memo, 0, sizeof(memo));
        memo[1][1] = 1;
        for(int i = 1; i <= m; i++)
            for(int j = 1; j <= n; j++)
                memo[i][j] += memo[i - 1][j] + memo[i][j - 1];
        return memo[m][n];
    }
};