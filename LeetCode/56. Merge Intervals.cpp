// 56. Merge Intervals
class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> vr;
        vr.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            if(vr.back()[1] >= intervals[i][0]) vr.back()[1] = max(vr.back()[1], intervals[i][1]);
            else vr.push_back(intervals[i]);
        }
        return vr;
    }
};