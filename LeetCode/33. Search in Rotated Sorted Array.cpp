// LeetCode 33. Search in Rotated Sorted Array
class Solution {
public:
    int findOffset(vector<int> nums, int left, int right){
        if(nums[left] < nums[right]) return 0;
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] > nums[middle + 1]) return middle + 1;
            else if(nums[middle] < nums[left]) right = middle - 1;
            else left = middle + 1;
        }
        return 0;
    }
    int binarySearch(vector<int> nums, int left, int right, int target){
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] == target) return middle;
            else if(target < nums[middle]) right = middle - 1;
            else left = middle + 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1) return (nums[0] == target) ? (0) : (-1);
        int offset = findOffset(nums, 0, n - 1);
        if(offset == 0) return binarySearch(nums, 0, n - 1, target);
        else if(nums[0] <= target && target <= nums[offset - 1]) return binarySearch(nums, 0, offset - 1, target);
        else return binarySearch(nums, offset, n - 1, target);
    }
};

// One Pass.
class Solution{
public:
    int search(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] == target) return middle;
            else if(nums[left] <= nums[middle]){
                if(nums[left] <= target && target < nums[middle]) right = middle - 1;
                else left = middle + 1;
            }
            else{
                if(nums[middle] < target && target <= nums[right]) left = middle + 1;
                else right = middle - 1;
            }
        }
        return -1;
    }
};