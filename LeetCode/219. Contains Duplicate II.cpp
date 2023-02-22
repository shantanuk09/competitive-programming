// LeetCode 219. Contains Duplicate II
class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        unordered_map<int, vector<int>> index;
        for(int i = 0; i < nums.size(); i++)
            index[nums[i]].push_back(i);
        for(auto &[key, value] : index){
            int n = value.size();
            for(int i = 0; i < n; i++)
                for(int j = i + 1; j < n; j++)
                    if(abs(value[i] - value[j]) <= k) return true;
        }
        return false;
    }
};

// Simpler.
class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        unordered_map<int, int> index;
        for(int i = 0; i < nums.size(); i++){
            if(index.find(nums[i]) != index.end() && abs(i - index[nums[i]]) <= k) return true;
            index[nums[i]] = i; 
        }
        return false;
    }
};