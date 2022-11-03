// LeetCode 875. Koko Eating Bananas
// Binary Search.
class Solution{
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1, leftMost = INT_MAX, rightMost = -1;
        vector<int> index = {-1, -1};
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] == target){
                leftMost = middle;
                right = middle - 1;
            }
            else if(nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        left = 0, right = nums.size() - 1;
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] == target){
                rightMost = middle;
                left = middle + 1;
            }
            else if(nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        if(leftMost != INT_MAX) index[0] = leftMost, index[1] = rightMost;
        return index;
    }
};