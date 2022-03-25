// LeetCode 300. Longest Increasing Subsequence
// Dynamic Programming
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), longest = 1;
        int arr[n];
        fill(arr, arr + n, 1);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]) arr[i] = max(arr[i], arr[j] + 1);
                longest = max(longest, arr[i]);
            }
        }
        return longest;
    }
};