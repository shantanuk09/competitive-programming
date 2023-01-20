// LeetCode 2495. Number of Subarrays Having Even Product
class Solution{
public:
    long long evenProduct(vector<int>& nums){
        long long count = nums.size() * (nums.size() + 1) / 2;
        long long oddCount = 0;
        for(auto n : nums){
            if(n % 2 == 1) oddCount++;
            else oddCount = 0;
            count -= oddCount;
        }
        return count;
    }
};