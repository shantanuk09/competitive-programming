// LeetCode 45. Jump Game II
// Greedy.
class Solution{
public:
    int jump(vector<int>& nums){
        int i = 0;
        int n = nums.size();
        int jumps = 0;
        int currentPosition = 0;
        int maxReachable = 0;
        while(currentPosition < n - 1){
            maxReachable = max(maxReachable, i + nums[i]);
            if(i == currentPosition) currentPosition = maxReachable, jumps++;
            i++;
        }
        return jumps;
    }
};


