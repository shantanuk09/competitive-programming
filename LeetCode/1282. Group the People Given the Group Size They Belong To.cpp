// LeetCode 1282. Group the People Given the Group Size They Belong To
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> vr, temp(groupSizes.size() + 1);
        for(int i = 0; i < groupSizes.size(); i++){
            temp[groupSizes[i]].push_back(i);
            if(temp[groupSizes[i]].size() == groupSizes[i]){
                vr.push_back(temp[groupSizes[i]]);
                temp[groupSizes[i]].clear();
            }
        }
        return vr;
    }
};