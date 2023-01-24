// LeetCode 2535. Difference Between Element Sum and Digit Sum of an Array
class Solution{
public:
    int findSumOfDigits(int n){
        if(n == 0) return 0;
        else return (n % 10) + findSumOfDigits(n / 10);
    }

    int differenceOfSum(vector<int>& nums){
        int elementSum = accumulate(nums.begin(), nums.end(), 0);
        int digitSum = 0;
        for(auto n : nums)
            digitSum += findSumOfDigits(n);
        return abs(elementSum - digitSum);
    }
};