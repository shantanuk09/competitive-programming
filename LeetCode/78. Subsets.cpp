// LeetCode 78. Subsets
// Implementatiom.
class Solution{
public:
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> powerSet = {{}};
        for(auto num : nums){
            int currentSize = powerSet.size();
            for(int i = 0; i < currentSize; i++){
                powerSet.push_back(powerSet[i]);
                powerSet.back().push_back(num);
            }
        }
        return powerSet;
    }
};

// Backtracking.
class Solution{
public:
    void backtrack(vector<int> &nums, vector<vector<int>> &powerSet, vector<int> &currentSet, int start){
        powerSet.push_back(currentSet);
        for(int i = start; i < nums.size(); i++){
            currentSet.push_back(nums[i]);
            backtrack(nums, powerSet, currentSet, i + 1);
            currentSet.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums){
        vector<int> currentSet;
        vector<vector<int>> powerSet;
        backtrack(nums, powerSet, currentSet, 0);
        return powerSet;
    }
};