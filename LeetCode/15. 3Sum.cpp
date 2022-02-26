// 15. 3Sum
class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> vr;
        unordered_map<int, int> ump; 
        if(nums.size() < 3 || nums[0] > 0) return {};
        for(int i = 0; i < nums.size(); i++)
            ump[nums[i]] = i;
        for(int i = 0; i < nums.size() - 2; i++){
            if(nums[i] > 0) break;
            for(int j = i + 1; j < nums.size() - 1; j++){
                int third = -1 * (nums[i] + nums[j]);
                if(ump.count(third) && ump.find(third) -> second > j) vr.push_back({nums[i], nums[j], third});
                j = ump.find(nums[j]) -> second;
            }
            i = ump.find(nums[i]) -> second;
        }
        return vr;
    }
};
