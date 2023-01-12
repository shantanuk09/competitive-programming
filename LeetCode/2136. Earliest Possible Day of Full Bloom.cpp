// LeetCode 2136. Earliest Possible Day of Full Bloom
class Solution{
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime){
        vector<pair<int, int>> plant;
        for(int i = 0; i < plantTime.size(); i++)
            plant.push_back(make_pair(plantTime[i], growTime[i]));
        sort(plant.begin(), plant.end(), [&](pair<int, int> p1, pair<int, int> p2){return p1.second > p2.second;});
        int result = 0, currentTime = 0;
        for(auto p : plant){
            // p.first is time required to plant.
            currentTime += p.first;
            // p.second is time required to bloom.
            result = max(result, currentTime + p.second);
        }
        return result;
    }
};