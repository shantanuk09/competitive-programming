// LeetCode 1685. Sum of Absolute Differences in a Sorted Array
class Solution{
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums){
        int n = nums.size();
        vector<int> arr(n, 0);
        vector<int> vr(n, 0);
        arr[0] = nums[0];
        for(int i = 1; i < n; i++)
            arr[i] = arr[i - 1] + nums[i];
        for(int i = 0; i < n; i++){
            if(i == 0) vr[i] = arr[n - 1] - n * nums[i];
            else if(i == n - 1) vr[i] = n * nums[n - 1] - arr[n - 1];
            else vr[i] = ((i + 1) * nums[i] - arr[i]) + (arr[n - 1] - arr[i] - nums[i] * (n - i - 1));
        }
        return vr;
    }
};