// LeetCode 2294. Partition Array Such That Maximum Difference Is K
class Solution{
public:
    int partitionArray(vector<int>& nums, int k){
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            minimum = min(minimum, nums[i]);
            maximum = max(maximum, nums[i]);
            if(maximum - minimum > k){
                count++;
                minimum = nums[i];
                maximum = nums[i];
            }
        }
        return count;
    }
};