// LeetCode 1498. Number of Subsequences That Satisfy the Given Sum Condition
// Two pointer.
class Solution{
public:
    int numSubseq(vector<int>& nums, int target){
        int subsequenceCount = 0;
        int n = nums.size();
        int left = 0, right = n - 1;
        int BIG = 1e9 + 7;
        vector<int> pows(n, 1);
        sort(nums.begin(), nums.end());
        for(int i = 1; i < n; i++)
            pows[i] = pows[i - 1] * 2 % BIG;
        while(left <= right){
            if(nums[left] + nums[right] > target) right--;
            else subsequenceCount = (subsequenceCount + pows[right - left++]) % BIG;
        }
        return subsequenceCount % BIG;
    }
};

