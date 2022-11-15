// LeetCode 73. Set Matrix Zeroes
// Simulate. 
class Solution{
public:
    void helper(vector<vector<int>> &arr, int m, int n, int r, int c){
        for(int i = 0; i < m; i++)
            arr[i][c] = 0;
        for(int i = 0; i < n; i++)
            arr[r][i] = 0;
    }
    
    void setZeroes(vector<vector<int>>& matrix){
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> vr;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == 0) vr.push_back({i, j});
        for(int i = 0; i < vr.size(); i++)
            helper(matrix, m, n, vr[i][0], vr[i][1]);
    }
};