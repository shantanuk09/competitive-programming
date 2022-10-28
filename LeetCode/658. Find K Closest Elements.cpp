// LeetCode 658. Find K Closest Elements
// Calculate distance and sort.
class Solution{
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x){
        vector<int> vr;
        vector<pair<int, int>> distance;
        for(int i = 0; i < arr.size(); i++)
            distance.push_back(make_pair(abs(arr[i] - x), arr[i]));
        sort(distance.begin(), distance.end());
        for(int i = 0; i < k; i++)
            vr.push_back(distance[i].second);
        sort(vr.begin(), vr.end());
        return vr;
    }
};