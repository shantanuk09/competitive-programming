// LeetCode 2017. Grid Game
// Cumulative Sum.
class Solution{
public:
    long long gridGame(vector<vector<int>>& grid){
        long long topSum = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        long long bottomSum = 0;
        long long answer = LLONG_MAX;
        for(int i = 0; i < grid[0].size(); i++){
            topSum -= grid[0][i];
            answer = min(answer, max(topSum, bottomSum));
            bottomSum += grid[1][i];
        }
        return answer;
    }
};