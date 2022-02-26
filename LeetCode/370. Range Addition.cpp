// 370. Range Addition
class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        int start, end, value;
        vector<int> vr(length, 0);
        for(auto tuple : updates){
            start = tuple[0], end = tuple[1], value = tuple[2];
            vr[start] += value;
            if(end < length - 1) vr[end + 1] -= value;
        }
        partial_sum(vr.begin(), vr.end(), vr.begin());
        return vr;
    }
};