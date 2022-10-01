// LeetCode 238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left[100005], right[100005], n = nums.size(), leftProduct = 1, rightProduct = 1;
        vector<int> vr(n, 0);
        for(int i = 0; i < n; i++){
            leftProduct *= nums[i], rightProduct *= nums[n - i - 1];
            left[i] = leftProduct, right[n - i - 1] = rightProduct;
        }
        for(int i = 0; i < n; i++){
            if(i == 0) vr[0] = right[i + 1];
            else if(i == n - 1) vr[i] = left[i - 1];
            else vr[i] = left[i - 1] * right[i + 1];
        }
        return vr;
    }
};