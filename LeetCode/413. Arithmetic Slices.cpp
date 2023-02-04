// LeetCode 413. Arithmetic Slices
class Solution{
public:
    int numberOfArithmeticSlices(vector<int>& nums){
        int n = nums.size();
        int arr[n];
        memset(arr, 0, sizeof(arr));
        int sum = 0;
        for(int i = 2; i < n; i++){
            if(nums[i - 1] - nums[i - 2] == nums[i] - nums[i - 1]){
                arr[i] = arr[i - 1] + 1;
                sum += arr[i];
            }
        }
        return sum;
    }
};