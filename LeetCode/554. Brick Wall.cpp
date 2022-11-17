// LeetCode 554. Brick Wall
// Find where the edges are and pass the line through the most frequent edge.
class Solution{
public:
    int leastBricks(vector<vector<int>>& wall){
        int gap, maxFreq = 0;
        unordered_map<int, int> freq;
        for(int i = 0; i < wall.size(); i++){
            gap = 0;
            for(int j = 0; j < wall[i].size() - 1; j++){
                gap += wall[i][j];
                maxFreq = max(maxFreq, ++freq[gap]);
            }
        }
        return wall.size() - maxFreq;
    }
};