// LeetCode 750. Number Of Corner Rectangles
class Solution{
public:
    int countCornerRectangles(vector<vector<int>>& grid){
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 0) continue;
                for(int p = i + 1; p < rows; p++){
                    if(grid[p][j] == 0) continue;
                    for(int q = j + 1; q < cols; q++)
                        count += grid[i][q] & grid[p][q];
                }
            }
        }
        return count;
    }
};