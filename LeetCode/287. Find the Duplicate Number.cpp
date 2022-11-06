// LeetCode 287. Find the Duplicate Number
// Use element at index 0 since 0 is not present in the array | Time Complexity O(n) | Space Complexity O(1)
class Solution{
public:
    int findDuplicate(vector<int>& nums){
        while(nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        return nums[0];
    }
};
