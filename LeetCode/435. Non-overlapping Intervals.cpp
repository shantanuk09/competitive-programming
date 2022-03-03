// LeetCode 435. Non-overlapping Intervals
class Solution{
public:
    static bool compare(const vector<int> &p, const vector<int> &q){
        return p[1] < q[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals){
				// Intervals must be sorted in order of the finish time.
        sort(intervals.begin(), intervals.end(), compare);
        int count = 0, start = intervals[0][0], end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(min(end, intervals[i][1]) - max(start, intervals[i][0]) > 0) count++;
            else start = intervals[i][0], end = intervals[i][1];
        }
        return count;
    }
};