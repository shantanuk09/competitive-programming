// LeetCode 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
class Solution{
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries){
        int inside, x, y, a, b, r;
        vector<int> answer;
        for(int i = 0; i < queries.size(); i++){
            inside = 0;
            for(int j = 0; j < points.size(); j++){
                x = points[j][0], y = points[j][1];
                a = queries[i][0], b = queries[i][1];
                r = queries[i][2];
                if((x - a) * (x - a) + (y - b) * (y - b) <= r * r) inside++;
            }
            answer.push_back(inside);
        }
        return answer;
    }
};