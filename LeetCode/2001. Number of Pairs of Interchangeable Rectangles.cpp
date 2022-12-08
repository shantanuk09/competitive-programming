// LeetCode 2001. Number of Pairs of Interchangeable Rectangles
// nC2.
class Solution{
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles){
        long long answer = 0;
        unordered_map<double, long long> ratios;
        for(auto rectangle : rectangles)
            ratios[1.0 * rectangle[0] / rectangle[1]]++;
        for(auto [key, value] : ratios)
            answer += value * (value - 1) / 2;
        return answer;
    }
};