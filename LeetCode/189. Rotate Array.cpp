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

// Using reverse.
class Solution{
public:
    void rotate(vector<int>& nums, int k){
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};