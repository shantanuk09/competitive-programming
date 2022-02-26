// 1743. Restore the Array From Adjacent Pairs
class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int last, prev;
        vector<int> vr;
        unordered_map<int, vector<int>> ump;
        for(auto pair : adjacentPairs){
            ump[pair[0]].push_back(pair[1]);
            ump[pair[1]].push_back(pair[0]);
        }
        for(auto pair : ump){
            if(pair.second.size() == 1){
                vr.push_back(pair.first);
                vr.push_back(pair.second[0]);
                break;
            }
        }
        while(vr.size() < adjacentPairs.size() + 1){
            last = vr.back(), prev = vr[vr.size() - 2];
            auto next = ump[last];
            if(next[0] != prev) vr.push_back(next[0]);
            else vr.push_back(next[1]);
        }
        return vr;
    }
};