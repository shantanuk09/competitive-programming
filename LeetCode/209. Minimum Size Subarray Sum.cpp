// LeetCode 209. Minimum Size Subarray Sum
// Sliding Window. 
class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums){
        int start = 0, sum = 0, length = nums.size() + 1;
        for(int end = 0; end < nums.size(); end++){
            sum += nums[end];
            while(sum >= target){
                if(sum >= target) length = min(length, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        return (length != nums.size() + 1) ? length : 0;
    }
};