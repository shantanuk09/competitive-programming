// LeetCode 2442. Count Number of Distinct Integers After Reverse Operations
class Solution{
public:
    int reverseInteger(int n){
        int reversed = 0;
        while(n){
            reversed = 10 * reversed + (n % 10);
            n /= 10;
        }
        return reversed;
    }

    int countDistinctIntegers(vector<int>& nums){
        set<int> unique(nums.begin(), nums.end());
        for(auto n : nums)
            unique.insert(reverseInteger(n));
        return unique.size();
    }
};