// LeetCode 347. Top K Frequent Elements
class Solution {
public:
    static bool compare(vector<int> &p, vector<int> &q){
        return p[0] > q[0];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> vr;
        vector<vector<int>> freq;
        unordered_map<int, int> ump;
        for(auto e : nums)
            ump[e]++;
        for(auto [key, value] : ump)
            freq.push_back({value, key});
        sort(freq.begin(), freq.end(), compare);
        for(int i = 0; i < k; i++)
            vr.push_back(freq[i][1]);
        return vr;
    }
};