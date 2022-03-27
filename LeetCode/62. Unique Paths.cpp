// LeetCode 62. Unique Paths
// Dynamic Programming 
class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[m + 1][n + 1];
        memset(arr, 0, sizeof(arr));
        arr[1][1] = 1;
        for(int i = 1; i <= m; i++)
            for(int j = 1; j <= n; j++)
                arr[i][j] += arr[i - 1][j] + arr[i][j - 1];
        return arr[m][n];
    }
};