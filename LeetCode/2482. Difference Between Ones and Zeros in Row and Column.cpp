// LeetCode 2482. Difference Between Ones and Zeros in Row and Column
class Solution{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        int onesRow[m], zerosRow[m], onesCol[n], zerosCol[n];
        vector<vector<int>> diff(m);
        
        // Calculate row-wise ones & zeroes.
        for(int i = 0; i < m; i++){
            int one = 0;
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 1) one++;
            onesRow[i] = one;
            zerosRow[i] = n - one;
        }

        // Calculate column-wise ones & zeroes;
        for(int i = 0; i < n; i++){
            int one = 0;
            for(int j = 0; j < m; j++)
                if(grid[j][i] == 1) one++;
            onesCol[i] = one;
            zerosCol[i] = m - one;
        }

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                diff[i].push_back(onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]);

        return diff;
    }
};