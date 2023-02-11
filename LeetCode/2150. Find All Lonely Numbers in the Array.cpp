# LeetCode 2150. Find All Lonely Numbers in the Array
class Solution{
public:
    vector<int> findLonely(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums;
        sort(nums.begin(), nums.end());
        vector<int> answer;
        for(int i = 1; i < n - 1; i++)
            if(nums[i - 1] != nums[i] && nums[i] != nums[i + 1] && nums[i - 1] + 1 != nums[i] && nums[i] + 1 != nums[i + 1]) answer.push_back(nums[i]);
        if(n > 1 && nums[0] != nums[1] && nums[0] + 1 != nums[1]) answer.push_back(nums[0]);
        if(n > 1 && nums[n - 2] != nums[n - 1] && nums[n - 2] + 1 != nums[n - 1]) answer.push_back(nums[n - 1]);
        return answer;
    }
};

# Alternate.
class Solution{
public:
    vector<int> findLonely(vector<int>& nums){
        unordered_map<int, int> ump;
        vector<int> answer;
        for(auto n : nums)
            ump[n]++;
        for(auto &[key, value] : ump)
            if(value == 1 && ump.find(key - 1) == ump.end() && ump.find(key + 1) == ump.end()) answer.push_back(key);
        return answer; 
    }
};