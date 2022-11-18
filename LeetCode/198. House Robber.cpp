// LeetCode 198. House Robber
// Dynamic Programming
class Solution {
public:
    int rob(vector<int>& nums){
        if(nums.size() == 1) return nums[0];
        int arr[105] = {nums[0], max(nums[0], nums[1])};
        for(int i = 2; i < nums.size(); i++)
            arr[i] = max(arr[i - 2] + nums[i], arr[i - 1]);
        return arr[nums.size() - 1];
    }
};