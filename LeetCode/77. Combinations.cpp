// LeetCode 77. Combinations
// Standard Backtracking.
class Solution{
public:
    void backtrackAndBuild(int n, int k, int start, vector<int> &current, vector<vector<int>> &result){
        if(k == 0){
            result.push_back(current);
            return;
        }
        for(int i = start; i <= n; i++){
            current.push_back(i);
            backtrackAndBuild(n, k - 1, i + 1, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k){
        vector<int> current;
        vector<vector<int>> result;
        backtrackAndBuild(n, k, 1, current, result);
        return result;
    }
};