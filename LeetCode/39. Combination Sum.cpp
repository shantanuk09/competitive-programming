// LeetCode 39. Combination Sum
// Standard Backtracking.
class Solution {
public:
    void backtrack(vector<int> &candidates, int target, vector<int> currentCombination, int currentSum, int currentIndex, vector<vector<int>> &answer){
        if(currentSum > target) return;
        if(currentSum == target){
            answer.push_back(currentCombination);
            return;
        }
        for(int i = currentIndex; i < candidates.size(); i++){
            currentCombination.push_back(candidates[i]);
            currentSum += candidates[i];
            backtrack(candidates, target, currentCombination, currentSum, i, answer);
            currentCombination.pop_back();
            currentSum -= candidates[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> currentCombination;
        backtrack(candidates, target, currentCombination, 0, 0, answer);
        return answer;
    }
};