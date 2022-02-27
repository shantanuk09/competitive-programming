// LeetCode 153. Find Minimum in Rotated Sorted Array
class Solution {
public:
    int binarySearch(vector<int> nums, int left, int right){
        if(nums[left] <= nums[right]) return nums[left];
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] > nums[middle + 1]) return nums[middle + 1];
            else if(nums[left] <= nums[middle]) left = middle + 1; 
            else right = middle - 1;
        }
        return nums[0];
    }
    int findMin(vector<int>& nums) {
        return binarySearch(nums, 0, nums.size() - 1);
    }
};