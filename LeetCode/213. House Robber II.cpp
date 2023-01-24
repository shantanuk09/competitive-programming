// LeetCode 213. House Robber II
// Dynamic Programming
class Solution{
public:
    int robber(vector<int> &nums, int start, int end){
        int n = end - start + 1;
        if(n == 2) return max(nums[start], nums[start + 1]);
        int arr[n];
        arr[0] = nums[start];
        arr[1] = max(nums[start], nums[start + 1]);
        for(int i = 2; i < n; i++)
            arr[i] = max(arr[i - 2] + nums[start + i], arr[i - 1]);
        return arr[n - 1];
    }

    int rob(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        // Rob from house 0 to (n - 2) or house 1 to (n - 1).
        return max(robber(nums, 0, n - 2), robber(nums, 1, n - 1));
    }
};