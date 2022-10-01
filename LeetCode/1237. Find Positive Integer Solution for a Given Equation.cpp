// LeetCode 1237. Find Positive Integer Solution for a Given Equation
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> vr;
        for(int i = 1; i <= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                // Match found.
                if(customfunction.f(i, j) == z) vr.push_back({i, j});
                // Function is strictly increasing, no point looking any more, break.
                else if(customfunction.f(i, j) > z) break;
            }
        }
        return vr;
    }
};