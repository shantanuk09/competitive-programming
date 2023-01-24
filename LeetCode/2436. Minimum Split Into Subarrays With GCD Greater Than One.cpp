// LeetCode 339. Nested List Weight Sum
class Solution{
public:
    int minimumSplits(vector<int>& nums){
        int count = 1;
        int last = nums[0];
        for(auto n : nums){
            if(gcd(last, n) != 1) last = gcd(last, n);
            else{
                count++;
                last = n;
            }
        }
        return count;
    }
};