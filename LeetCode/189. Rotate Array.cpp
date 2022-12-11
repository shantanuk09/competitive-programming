// LeetCode 189. Rotate Array
// Two Pointer.
class Solution{
public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k %= n;
        int left = 0;
        int right = n - k;
        vector<int> vr;
        for(int i = right; i < n; i++)
            vr.push_back(nums[i]);
        for(int i = left; i < right; i++)
            vr.push_back(nums[i]);
        nums = vr;
    }
};
