// LeetCode 456. 132 Pattern
class Solution{
public:
    bool find132pattern(vector<int>& nums){
        int num3 = INT_MIN;
        stack<int> pattern;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] < num3) return true;
            else{
                while(!pattern.empty() && pattern.top() < nums[i]){
                    num3 = pattern.top();
                    pattern.pop();
                }
            }
            pattern.push(nums[i]);
        }
        return false;
    }
};