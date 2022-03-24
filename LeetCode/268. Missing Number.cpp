// LeetCode 268. Missing Number
// Using XOR.
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for(int i = 0; i < nums.size(); i++)
            missing ^= i ^ nums[i];
        return missing;
    }
};

// Gauss' Formula
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(auto e : nums)
            sum += e;
        return n * (n + 1) / 2 - sum;
    }
};