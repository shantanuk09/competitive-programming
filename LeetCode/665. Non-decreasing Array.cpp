// LeetCode 665. Non-decreasing Array
// Locate and check problem index.
class Solution{
public:
    bool checkPossibility(vector<int>& nums){
        int index = -1;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i - 1] > nums[i]){
                if(index != -1) return false;
                index = i - 1;
            }
        }
        return (index == -1) || (index == 0) || (index == n - 2) || (nums[index - 1] <= nums[index + 1]) || (nums[index] <= nums[index + 2]);
    }
};