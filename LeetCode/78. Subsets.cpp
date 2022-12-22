// LeetCode 78. Subsets
// Implementatiom.
class Solution{
public:
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> powerSet = {{}};
        for(auto num : nums){
            int currentSize = powerSet.size();
            for(int i = 0; i < currentSize; i++){
                powerSet.push_back(powerSet[i]);
                powerSet.back().push_back(num);
            }
        }
        return powerSet;
    }
};

