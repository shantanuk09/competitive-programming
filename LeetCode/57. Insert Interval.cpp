// LeetCode 57. Insert Interval
// Greedy.
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), index;
        vector<vector<int>> vr;
        for(index = 0; index < n; index++){
            if(intervals[index][1] < newInterval[0]) vr.push_back(intervals[index]);
            else break;
        }
        if(vr.empty() || vr.back()[1] < newInterval[0]) vr.push_back(newInterval);
        else vr.back()[0] = min(vr[index][0], newInterval[0]), vr.back()[1] = max(vr.back()[1], newInterval[1]);
        for(index = index; index < n; index++){
            if(vr.back()[1] >= intervals[index][0]) vr.back()[0] = min(vr.back()[0], intervals[index][0]), vr.back()[1] = max(vr.back()[1], intervals[index][1]);
            else vr.push_back(intervals[index]);
        }
        return vr;
    }
};