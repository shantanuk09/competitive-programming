// LeetCode 46. Permutations
// Standard Backtracking.
class Solution{
public:
    void backtrackAndBuild(vector<int> &nums, vector<int> &current, vector<vector<int>> &permutations){
        if(current.size() == nums.size()){
            permutations.push_back(current);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(find(current.begin(), current.end(), nums[i]) != current.end()) continue;
            current.push_back(nums[i]);
            backtrackAndBuild(nums, current, permutations);
            current.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums){
        vector<int> current;
        vector<vector<int>> permutations;
        backtrackAndBuild(nums, current, permutations);
        return permutations;
    }
};

// Using next_permutation;
class Solution{
public:
    vector<vector<int>> permute(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> permutations;
        do{
            permutations.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return permutations;
    }
};