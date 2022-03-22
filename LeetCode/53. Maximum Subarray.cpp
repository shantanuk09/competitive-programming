// LeetCode 53. Maximum Subarray
// Dynamic Programming.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], arr[100000] = {nums[0]};
        for(int i = 1; i < nums.size(); i++){
            arr[i] = max(nums[i], nums[i] + arr[i - 1]);
            maxSum = max(maxSum, arr[i]);
        }
        return maxSum;
    }
};

