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
