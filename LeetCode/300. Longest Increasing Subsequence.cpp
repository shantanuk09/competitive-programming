// LeetCode 300. Longest Increasing Subsequence
//Dynamic Programming.
class Solution{
public:
    int lengthOfLIS(vector<int>& nums){
        int n = nums.size(), arr[n], longest = 1;
        fill(arr, arr + n, 1);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]) arr[i] = max(arr[i], 1 + arr[j]);
                longest = max(longest, arr[i]);
            }
        }
        return longest;
    }
};