// LeetCode 59. Spiral Matrix II
class Solution{
public:
    vector<vector<int>> generateMatrix(int n){
        vector<vector<int>> spiral(n, vector<int>(n, 0));
        int row = 0;
        int col = 0;
        int value = 1;
        while(1){
            while(col < n && spiral[row][col] == 0)
                spiral[row][col++] = value++;
            if(value > n * n) break;
            row++, col--;

            while(row < n && spiral[row][col] == 0)
                spiral[row++][col] = value++;
            if(value > n * n) break;
            row--, col--;

            while(col >= 0 && spiral[row][col] == 0)
                spiral[row][col--] = value++;
            if(value > n * n) break;
            row--, col++;

            while(row >= 0 && spiral[row][col] == 0)
                spiral[row--][col] = value++;
            if(value > n * n) break;
            row++, col++;
        }
        return spiral;
    }
};