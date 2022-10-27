// LeetCode 1838. Frequency of the Most Frequent Element
// Sliding Window.
class Solution{
public:
    int maxFrequency(vector<int>& nums, int k){
        int i, freq = 1;
        long long sum = 0;
        sort(nums.begin(), nums.end());
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while(sum + k < (long long) nums[j] * (j - i + 1)){
                sum -= nums[i];
                i++;
            }
            freq = max(freq, j - i + 1);
        }
        return freq;
    }
};