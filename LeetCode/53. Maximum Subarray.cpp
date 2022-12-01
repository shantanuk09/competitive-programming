// LeetCode 53. Maximum Subarray
// Dynamic Programming 
class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int big = nums[0];
        int arr[100005] = {nums[0]};
        for(int i = 1; i < nums.size(); i++){
            arr[i] = max(arr[i - 1] + nums[i], nums[i]);
            big = max(big, arr[i]);
        }
        return big;
    }
};