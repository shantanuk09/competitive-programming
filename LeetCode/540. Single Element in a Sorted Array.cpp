// LeetCode 540. Single Element in a Sorted Array
class Solution{
public:
    int singleNonDuplicate(vector<int>& nums){
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int middle = left + (right - left) / 2;
            bool evenHalves = (right - middle) % 2 == 0;
            if(nums[middle - 1] == nums[middle]){
                if(evenHalves) right = middle - 2;
                else left = middle + 1;
            }
            else if(nums[middle] == nums[middle + 1]){
                if(evenHalves) left = middle + 2;
                else right = middle - 1;
            }
            else return nums[middle];
        }
        return nums[left];
    }
};