// LeetCode 198. House Robber
// Dynamic Programming
class Solution{
public:
    int rob(vector<int>& nums){
        if(nums.size() == 1) return nums[0];
        int arr[105] = {nums[0], max(nums[0], nums[1])}, n = nums.size();
        for(int i = 2; i < n; i++)
            arr[i] = max(arr[i - 1], arr[i - 2] + nums[i]);
        return arr[n - 1];
    }
};

// Recursive Top Down Dynamic Programming
class Solution {
public:
    int robMax(vector<int> &nums, vector<int> &vr, int index){
        if(index < 0) return 0;
        if(vr[index] >= 0) return vr[index];
        vr[index] = max(robMax(nums, vr, index - 1), robMax(nums, vr, index - 2) + nums[index]);
        return vr[index];
    }
    
    int rob(vector<int>& nums) {
        vector<int> vr(nums.size() + 1, -1);
        return robMax(nums, vr, nums.size() - 1);
    }
};

// Dynamic Programming
class Solution {
public:
    int rob(vector<int>& nums) {
        int previous = 0, current = 0;
        for(int n : nums){
            int temp = current;
            current = max(previous + n, current);
            previous = temp;
        }
        return current;
    }
};