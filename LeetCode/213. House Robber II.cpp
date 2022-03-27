// LeetCode 213. House Robber II
// Dynamic Programming
class Solution{
public:
    int robber(vector<int>& nums, int l, int r){
        int previous = 0, current = 0;
        for (int i = l; i <= r; i++) {
            int temp = max(previous + nums[i], current);
            previous = current;
            current = temp;
        }
        return current;
    }
    
    int rob(vector<int>& nums){
        int n = nums.size(); 
        if (n < 2) return n ? nums[0] : 0;
        return max(robber(nums, 0, n - 2), robber(nums, 1, n - 1));
    }
};