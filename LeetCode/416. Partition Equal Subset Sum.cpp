// LeetCode 416. Partition Equal Subset Sum
// Dynamic Programming 
class Solution{
public:
    bool DFS(vector<int> &nums, int n, int subsetSum, vector<vector<optional<bool>>> &memo){
        if(subsetSum == 0) return true;
        if(n == 0 || subsetSum < 0) return false;
        if(memo[n][subsetSum] != nullopt) return memo[n][subsetSum] == true;
        bool result = DFS(nums, n - 1, subsetSum - nums[n - 1], memo) || DFS(nums, n - 1, subsetSum, memo);
        memo[n][subsetSum] = result;
        return result;
    }

    bool canPartition(vector<int>& nums){
        int totalSum = reduce(nums.begin(), nums.end());
        if(totalSum % 2) return false;
        int subsetSum = totalSum / 2;
        int n = nums.size();
        vector<vector<optional<bool>>> memo(n + 1, vector<optional<bool>>(subsetSum + 1, nullopt));
        return DFS(nums, n - 1, subsetSum, memo);
    }
};
