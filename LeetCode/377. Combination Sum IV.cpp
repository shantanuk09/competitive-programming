// LeetCode 377. Combination Sum IV
// Dynamic Programming
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<uint> vr(target + 1);
        vr[0] = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < vr.size(); i++){
            for(auto n : nums){
                if(i >= n) vr[i] += vr[i - n];
                else break;
            }
        }
        return vr[target];
    }
};

// Top Down Dynamic Programming
class Solution {
public:
    int helper(vector<int> &vr, vector<int> &nums, int target){
        if(target == 0) return 1;
        if(vr[target] != -1) return vr[target];
        vr[target] = 0;
        for(auto n : nums)
            if(n <= target) vr[target] += helper(vr, nums, target - n);
        return vr[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> vr(target + 1, -1);
        return helper(vr, nums, target);
    }
};