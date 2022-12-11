// LeetCode 973. K Closest Points to Origin
// Priority Queue. 
class Solution{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k){
        vector<vector<int>> closestPoints;
        priority_queue<pair<long long, vector<int>>> distanceOfPoints;
        for(auto point : points){
            int x = point[0];
            int y = point[1];
            long long distance = -1 * (x * x + y * y);
            distanceOfPoints.push({distance, {x, y}});
        }
        for(int i = 0; i < k; i++){
            closestPoints.push_back(distanceOfPoints.top().second);
            distanceOfPoints.pop();
        }
        return closestPoints;
    }
};